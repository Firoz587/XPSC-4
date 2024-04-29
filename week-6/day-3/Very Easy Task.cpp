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
        if(m<min(a,b))
            return false;
        int cnt=1;
        m-=min(a,b);
        cnt+=m/a+m/b;
        return cnt>=n;
    };
    ll l=1,r=max(a,b)*n,mid,ans=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}


