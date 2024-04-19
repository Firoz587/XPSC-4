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
        vector<ll>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>v;
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            ll x=log2(a[i])+1;
            mp[x]++;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll y=mp[v[v.size()-1]];
        cout<<(y+1)/2<<endl;
    }
    return 0;
}


