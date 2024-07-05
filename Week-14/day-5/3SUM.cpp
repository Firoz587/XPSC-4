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
    vector<ll>v(n+3);
    map<ll,ll>mp;
    bool ok = false;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        ll x=v[i]%10;
        mp[x]++;
    }
    for(ll i=0;i<10;i++)
    {
        for(ll j=0;j<10;j++)
        {
            for(ll k=0;k<10;k++)
            {
                ll a=-1,b=-1,c=-1;
                if(mp[i]!=0)
                {
                    a=1;
                    mp[i]--;
                }
                if(mp[j]!=0)
                {
                    b=1;
                    mp[j]--;
                }
                if(mp[k]!=0)
                {
                    c=1;
                    mp[k]--;
                }
                if(a==1 && b==1 && c==1)
                {
                    ll sum=i+j+k;
                    if(sum%10==3)
                    {
                        ok=true;
                        break;
                    }
                }
                if(a==1)
                    mp[i]++;
                if(b==1)
                    mp[j]++;
                if(c==1)
                    mp[k]++;
            }
        }
    }
    if(ok)
    {
        yes;
    }
    else
    {
        no;
    }
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

