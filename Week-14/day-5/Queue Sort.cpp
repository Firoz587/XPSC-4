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
    ll n,mn=INT_MAX,idx;
    cin>>n;
     vector<ll>v(n);
     for(ll i=0;i<n;i++)
     {
         cin>>v[i];
         mn=min(v[i],mn);
     }
     for(ll i=0;i<n;i++)
     {
         if(v[i]==mn)
         {
             idx=i;
             break;
         }
     }
     if(is_sorted(v.begin()+idx,v.end()))
     {
         cout<<idx;
     }
     else
        cout<<-1;
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



