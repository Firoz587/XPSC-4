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

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n),p_s(n+2);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        p_s[0]=v[0];
        for(int i=1;i<n;i++)
        {
            p_s[i]=p_s[i-1]+v[i];
        }
        ll ans=0;
        for(int i=1;i<n;i++)
        {
            ans=max(ans,__gcd(p_s[i-1],p_s[n-1]-p_s[i-1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}
