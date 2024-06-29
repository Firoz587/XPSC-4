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
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<pair<ll,ll>>v(n);
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            vector<ll>p(x);
            ll m=-1;
            for(int j=0; j<x; j++)
            {
                cin>>p[j];
                m=max(m,p[j]-j+1);
            }
            v[i]= {m,x};
        }
        sort(v.begin(),v.end());
        ll l=v[0].first,r=v[n-1].first;
        ll ans = 1e12;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            ll curr = mid;
            bool ok = true;
            for(int i=0; i<n; i++)
            {
                if(curr>=v[i].first)
                {
                    curr+=v[i].second;
                }
                else
                {
                    ok = false;
                    break;
                }
            }
            if(ok)
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
