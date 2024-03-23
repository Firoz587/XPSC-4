#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        multiset<ll> ans;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if (v[0] == v[n - 1])
        {
            cout << "0\n";
            continue;
        }

        ll cnt = 0, mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cnt++;
            if (v[i] != v[i + 1] || i==n-1)
            {
                if (cnt > mx)
                {
                    mx = cnt;
                }
                cnt = 0;
            }
        }

        ll sum = 0;
        for (ll i = mx * 2; ; i *= 2)
        {
            if (n == i)
            {
                sum += i / 2 + 1;
                break;
            }
            if (n < i)
            {
                sum += n - i / 2 + 1;
                break;
            }
            sum =sum+ i / 2 + 1;
        }

        cout << sum << "\n";
    }
    return 0;
}
