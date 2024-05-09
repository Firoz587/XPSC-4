/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(vector<ll> v ,ll n)
{
    ll result=0,one=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            one++;
        }
        else
        {
            result+=one;
        }
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll ans=fun(v,n);
        int ok=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                ok=i;
                break;
            }
        }
        ans=max(ans,fun(v,n));
        if(ok!=-1)
        {
            v[ok]=0;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                v[i]=0;
                break;
            }
        }
        ans=max(ans,fun(v,n));

        cout<<ans<<endl;
    }
    return 0;
}
