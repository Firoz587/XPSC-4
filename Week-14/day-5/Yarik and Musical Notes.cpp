/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    map<ll,int>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    ll ans=0,c=0;
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++)
    {
        c++;
        if(i==n-1 || v[i+1]!=v[i])
        {
            ans+=((c*(c-1LL))/2LL);
             c=0;
        }
        for(ll j=1;;j++)
        {
            ll r=v[i]*(1LL<<j);
            if(r>v[n-1])
                break;
            if(!mp[r])
                continue;
            if(r-v[i]==j)
            {
                ans+=mp[r];
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
        solve();
    }
    return 0;
}



