/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a,ll b)
{
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll a = 1, b = n;
    for(ll i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ll tmp_a = i;
            ll tmp_b = n / i;
            if(gcd(tmp_a, tmp_b) == 1)
            {
                if(max(tmp_a, tmp_b) < max(a, b))
                {
                    a = tmp_a;
                    b = tmp_b;
                }
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
