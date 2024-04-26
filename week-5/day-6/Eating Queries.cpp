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
        ll n,m,sum=0;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
             cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<ll>());
        vector<ll>p_s;
        for(int i=0;i<n;i++)
        {
             sum+=v[i];
             p_s.push_back(sum);
        }
        while(m--)
        {
            ll x;
            cin>>x;
            if(x>p_s[n-1])
            {
                cout<<-1<<endl;
                continue;
            }
            ll l=0,r=n-1,mid,ans=-1;
            while(r>=l)
            {
                mid=(l+r)/2;
                if(p_s[mid]>=x)
                {
                    ans=mid;
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            cout<<ans+1<<endl;
        }
    }
    return 0;
}
