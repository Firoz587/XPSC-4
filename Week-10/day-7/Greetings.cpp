#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define ll long long

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first < b.first;
}
void solve()
{
    ll n, i;
    cin >> n;
    vector<pair<ll,ll>> v;
    pbds<ll>p;
    for (i = 0; i < n; i++)
    {
        pair <ll,ll> x;
        cin >> x.first >> x.second;
        v.push_back(x);
        p.insert(x.second);
    }
    sort(v.begin(), v.end(), cmp);
    ll ans = 0;
    for (i = 0; i < n - 1; i++)
    {
        ans += p.order_of_key(v[i].second);
        p.erase(v[i].second);
    }
    cout << ans << endl;
}
int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
