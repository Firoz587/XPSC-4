#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        cin>>v[0];
        ll k=v[0];
        for(int i=1;i<n;i++)
        {
            cin>>v[i];
            k^=v[i];
        }
        ll mn=k;
        for(int i=0;i<n;i++)
        {
            ll k1=(k^v[i]);
            mn=min(mn,k1);
        }
        cout<<mn<<endl;
    }
    return 0;
}
