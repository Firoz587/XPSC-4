/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);
void solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    ll ans=0;
    ll curr=0;
    ll s=0;
    for(int i=0; i<n; i++)
    {
        curr+=v[i];
        while(curr>r && s<=i)
        {
            curr-=v[s++];
        }
        if(curr>=l && curr <=r)
        {
            ans++;
            curr=0;
            s=i+1;
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


