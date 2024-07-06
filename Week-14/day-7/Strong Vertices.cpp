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
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];
    }
    vector<pair<ll,ll>>v(n);
    vector<ll>ans;
    for(ll i=0;i<n;i++)
    {
        pair<ll,ll>p={a[i]-b[i],i+1};
        v[i]=p;
    }
    sort(v.rbegin(),v.rend());
    ll m = v[0].first;
    ll cnt=0;
    for(auto x:v)
    {
        if(x.first==m)
        {
            cnt++;
            ans.push_back(x.second);
        }
        else
        {
            break;
        }
    }
    cout<<cnt<<endl;
    sort(ans.begin(),ans.end());
    for(int i=0;i<cnt;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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
