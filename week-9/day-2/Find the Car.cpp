/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,q;
        cin >> n >> k >> q;
        vector<ll>a(k+1),b(k+1);
        for(int i=1; i<=k; i++) cin>>a[i];
        for(int i=1; i<=k; i++) cin>>b[i];
        while(q--)
        {
            ll x;
            cin>>x;
            ll xi=lower_bound(a.begin(),a.end(),x)-a.begin();
            if(a[xi]==x)
                cout<<b[xi]<<" ";
            else
            {
                ll up=a[xi]-a[xi-1];
                ll dw=b[xi]-b[xi-1];
                ll ans=b[xi-1]+((x-a[xi-1])*dw)/up;
                cout<<ans<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



