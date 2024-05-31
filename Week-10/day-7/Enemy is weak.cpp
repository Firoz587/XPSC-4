#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using pbds = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using pbds1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),a1(n);
    ll ans = 0;
    pbds<ll> p;
    pbds1<ll>p1;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        p.insert(a[i]);
        a1[i]=p.order_of_key(a[i]);
    }
    for (ll i = n - 1; i >= 0; i--) {
            p1.insert(a[i]);
        ans += (p1.order_of_key(a[i])*a1[i]);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
   // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
