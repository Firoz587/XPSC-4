/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i =0;i<n;i++) cin>>v[i];
    map<ll,ll>mp;
    ll mx=0;
    ll ans=0;
    for(ll i =0;i<n;i++) ans+=v[i];
    for(ll i=0;i<n;i++)
    {
        mp[v[i]]++;
        if(mp[v[i]]>=2)
        {
            if(v[i]>mx)
            {
                mx=v[i];
            }
        }
        v[i]=mx;
    }
    mp.clear();
    for(ll i=0;i<n;i++) mp[v[i]]++;
    ll p =0,d=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]!=p)
        {
            ans+=v[i];
            if(mp[v[i]]==1)
                ans+=(n-i-1)*d;
            else
            {
                ans+=(n-i-1)*v[i];
                d=v[i];
            }
        }
    }
    cout<<ans<<endl;
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        Firoz();
    }
    return 0;
}
