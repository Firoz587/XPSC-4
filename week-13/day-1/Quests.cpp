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
        int n;
        cin>>n;
        ll c,d;
        cin>>c>>d;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll total = 0;
        for(int i=0;i<min(n,(int)d);i++)
        {
            total+=v[i];
        }
        if(total>=c)
        {
            cout<<"Infinity"<<endl;
            continue;
        }
        auto ok=[&](ll m)
        {
            if(m==0)
            {
                return (v[0]*d>=c);
            }
            ll sum =0,g=0;
            if(m>=n)
            {
                for(int i=0;i<n;i++)
                {
                    sum+=v[i];
                }
            }
            else
            {
                for(int i=0;i<m;i++)
                {
                    sum+=v[i];
                }
            }
            ll t=d/m;
            g=t*sum;
            ll r=d%m;
            if(r>=n)
            {
                for(int i=0;i<n;i++)
                {
                    g+=v[i];
                }
            }
            else
            {
                for(int i=0;i<r;i++)
                {
                    g+=v[i];
                }
            }
            return (g>=c);
        };
        ll ans=-1,l=0,h=(ll)1000000000000;
        while(l<=h)
        {
            ll mid = (l+h)/2;
            if(ok(mid+1))
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        if(ans==-1)
        {
            cout<<"Impossible"<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
