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

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll l=0,r=n-1,mid,ans=-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v[mid]<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<ans+1<<endl;
        //int right = upper_bound(v.begin(), v.end(), x) - v.begin();
        //cout<<right<<endl;
    }
    return 0;
}


