/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1000000007;
ll fun(ll a,ll b)
{
    ll result=1;
    while(b>0)
    {
        if(b & 1)
        {
            result = result*a;
            result%=mod;
        }
        a=a*a;
        a%=mod;
        b>>=1;
    }
    return result%mod;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;

        ll ans=0;
        for(int i=0;i<64;i++)
        {
            if(((ll)1<<i)&(m))
            {
                ans+=fun(n,i);
            }
        }
        cout<<ans%mod<<endl;
    }

    return 0;
}
