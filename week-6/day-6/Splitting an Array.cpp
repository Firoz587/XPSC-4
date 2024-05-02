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
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    ll mx = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mx = max(mx, v[i]);
        sum += v[i];
    }

    if (n <= k)
    {
        cout << sum << endl;
        return 0;
    }

    auto ok = [&](ll m)
    {
        ll cnt = 1;
        ll currSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (currSum + v[i] <= m)
            {
                currSum += v[i];
            }
            else
            {
                cnt++;
                currSum = v[i];
            }
        }
        return cnt <= k;
    };

    ll l = mx, r = sum, ans = 0;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}


