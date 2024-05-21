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
    ll mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
    }
    ll sum = 0;
    vector<ll> diff_c;
    for (int i = 0; i < n; i++)
    {
        if (mx > v[i])
        {
            ll dif=mx - v[i];
            diff_c.push_back(dif);

            sum += dif;
        }
    }

    ll x = diff_c.front();
    for(auto a:diff_c)
    {
        x=__gcd(a,x);
    }
    ll y = sum / x;
    cout << y << " " << x << endl;

    return 0;
}
