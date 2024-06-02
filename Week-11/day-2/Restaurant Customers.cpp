#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll n;
    cin>>n;
    ll a,b,mx=0,total=0;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    for(auto x:mp)
    {
        total+=x.second;
        mx=max(mx,total);
    }
    cout<<mx<<endl;
    return 0;
}
