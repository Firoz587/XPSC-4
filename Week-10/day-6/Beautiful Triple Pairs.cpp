#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<tuple<int, int, int>, int> mp;
        map<pair<int, int>, int> w1, w2, w3;

        for (int j = 0; j <= n - 3; j++)
        {
            auto x = make_tuple(a[j], a[j+1], a[j+2]);
            mp[x]++;
            w1[ {a[j+1], a[j+2]}]++;
            w2[ {a[j], a[j+2]}]++;
            w3[ {a[j], a[j+1]}]++;
        }

        long long b_p = 0;
        for (auto& it : mp)
        {
            auto [b1, b2, b3] = it.first;
            int count = it.second;

            b_p += (long long)count * (w1[ {b2, b3}] - count);
            b_p += (long long)count * (w2[ {b1, b3}] - count);
            b_p += (long long)count * (w3[ {b1, b2}] - count);
        }

        cout << b_p / 2 << endl;
    }

    return 0;
}