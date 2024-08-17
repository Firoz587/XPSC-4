/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    map<ll,ll>mp1,mp2;
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v[i]=x;
        mp1[i]=x;
        mp2[x]=i;
    }
    for(int i=1;i<=n;i++)
    {
        ll t=v[i];
        ll r = mp1[t];
        ll u = mp2[r];
        if(t!=u)
        {
            no
            return;
        }
    }
    yes
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
