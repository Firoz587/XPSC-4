#include<bits/stdc++.h>
using namespace std;
long long fun(string s,int n)
{
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')
            sum+=(n-(i+1));
        if(s[i]=='L')
            sum+=i;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        long long m=n/2,k=0,sum=fun(s,n);
        for(int i=0;i<m;i++)
        {
            if(k==n)
                break;
            if(s[i]=='L')
            {
                s[i]='R';
                sum+=((n-1-i)-i);
                cout<<sum<<" ";
                k++;
            }
            int v=(n-1)-i;
            if(s[v]=='R')
            {
                s[v]='L';
                sum+=(v-(n-1-v));
                cout<<sum<<" ";
                k++;
            }
        }
        int r=n-k;
        for(int j=0;j<r;j++)
        {
            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}

