/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll>pFactor(ll n)
{
    vector<ll>v;
    if(n%2==0)
    {
        v.push_back(2);
        while(n%2==0)
        {
            n/=2;
        }
    }
    for(ll i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
        {
            v.push_back(i);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>2)
        v.push_back(n);
    return v;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        vector<ll>p_v=pFactor(b);
        bool ok = true;
        for(auto x:p_v)
        {
            if(a%x!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }

    return 0;
}
