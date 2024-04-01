#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        unordered_map<ll, vector<ll>> v;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v[x].push_back(i);
        }
        while (k--)
        {
            ll a, b;
            cin >> a >> b;
            if (v.find(a) != v.end() && v.find(b) != v.end())
            {
                vector<ll>& p_a = v[a];
                vector<ll>& p_b = v[b];
                auto it_a = lower_bound(p_a.begin(), p_a.end(), 0);
                auto it_b = lower_bound(p_b.begin(), p_b.end(), p_a[0]);
                if (it_a != p_a.end() && it_b != p_b.end() && *it_a < *it_b)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
