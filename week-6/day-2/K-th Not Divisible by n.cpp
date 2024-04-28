/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ok(ll n,ll x)
{
    return x-x/n;
}
ll fun(ll n,ll k)
{
    ll l=1,r=1LL<<62,mid;
    while(l<r)
    {
        mid=l+(r-l)/2;
        if(ok(n,mid)<k)
        {
            l = mid+1;
        }
        else
        {
            r = mid;
        }
    }
    return l;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<fun(n,k)<<endl;
    }
    return 0;
}

