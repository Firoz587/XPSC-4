#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>r;
        r.push_back(n);
        while(__builtin_popcount(n)>1)
        {
            ll zero = __builtin_ctz(n);
            n-=(1<<zero);
            r.push_back(n);
        }
        while(n>1)
        {
            n/=2;
            r.push_back(n);
        }
        cout<<r.size()<<endl;
        for(auto x:r)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
