/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(vector<ll>& a, vector<ll>& b, ll x)
{
    ll cnt = 0;
    ll n = a.size();
    ll m = b.size();
    ll j = m - 1;

    for (int i = 0; i < n; ++i)
    {
        while (j >= 0 && a[i] + b[j] > x)
        {
            j--;
        }
        cnt += (j + 1);
    }
    return cnt;
}

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll low = a[0] + b[0], high = a[n - 1] + b[n - 1];
    while (low < high) {
        ll mid = low + (high - low) / 2;
        if (fun(a, b, mid) < k)
            low = mid + 1;
        else
            high = mid;
    }

    cout << low << endl;

    return 0;
}
