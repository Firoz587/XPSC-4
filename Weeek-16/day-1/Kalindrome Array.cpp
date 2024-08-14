/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

int solve(vector<int>&v)
{
    int i=0,j=v.size()-1;
    int ans=1;
    while(i<j)
    {
        if(v[i]!=v[j])
        {
            ans=0;
            break;
        }
        i++;
        j--;
    }
    return ans;
}
void Firoz()
{
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++) cin>>ar[i];
    int l=0,r=n-1;
    int ans=-1;
    int a,b;
    while(l<r)
    {
        if(ar[l]!=ar[r])
        {
            ans=1;
            a=ar[l];
            b=ar[r];
            break;
        }
        l++;
        r--;
    }
    if(ans==-1)
        yes
    else
    {
        vector<int>v1,v2;
        for(int i=0;i<n;i++)
        {
            if(ar[i]==a)
                continue;
            v1.push_back(ar[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(ar[i]==b)
                continue;
            v2.push_back(ar[i]);
        }
        int r1=solve(v1);
        int r2=solve(v2);
        if(r1==1 || r2==1)
            yes
        else
            no
    }
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        Firoz();
    }
    return 0;
}
