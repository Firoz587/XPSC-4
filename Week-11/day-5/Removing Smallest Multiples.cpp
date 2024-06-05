#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        s="."+s;
        vector<int>v(n+1,0);
        for(int i=1; i<=n; i++)
        {
            if(s[i]=='1')
            {
                v[i]=2;
            }
        }
        ll sum=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                if(v[j]==0)
                {
                    v[j]=1;
                    sum+=i;
                }
                else if(v[j]==2)
                {
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}

