/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll moves=0;
    ll curr_val=v[0];
    for(ll i=1; i<n; i++)
    {
       // cout<<curr_val<<endl;
        if(curr_val>v[i])
        {
            moves+=(curr_val-v[i]);
            v[i]=curr_val;
        }
        else
        {
            curr_val=v[i];
        }
       // cout<<moves<<endl;
    }
    cout<<moves<<endl;
    return 0;
}
