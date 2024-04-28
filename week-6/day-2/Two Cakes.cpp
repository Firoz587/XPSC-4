/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,a,b;
    cin>>n>>a>>b;

    auto ok = [&](ll m)
    {
        int p_a=min(a/m,n);
        int p_b=min(b/m,n-p_a);
        return p_a+p_b>=n;
    };
    ll l=1,r=min(a,b),mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}

