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
    vector<ll>v(n);
    map<ll,ll>mp,f,l;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(mp[v[i]]==0)
        {
            mp[v[i]]++;
            f[v[i]]=i;
            l[v[i]]=i;
        }
        else
        {
            l[v[i]]=i;
        }
    }
    ll ans=0,sum=0;
    for(ll i=0;i<n;i++)
    {
        if(f[v[i]]==i)
            sum++;
        if(l[v[i]]==i)
            ans+=sum;
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
