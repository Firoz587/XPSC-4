#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v(n), w(n), x(n);

        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> w[i];
        for (int i = 0; i < n; i++) cin >> x[i];

        vector<pair<long long, int>> v_t, w_t, x_t;
        for (int i = 0; i < n; i++)
        {
            v_t.push_back({v[i], i});
            w_t.push_back({w[i], i});
            x_t.push_back({x[i], i});
        }
        sort(v_t.rbegin(), v_t.rend());
        sort(w_t.rbegin(), w_t.rend());
        sort(x_t.rbegin(), x_t.rend());

        long long mx = 0;

        for (int i = 0; i < min(3, n); i++)
        {
            for (int j = 0; j < min(3, n); j++)
            {
                for (int k = 0; k < min(3, n); k++)
                {
                    if (v_t[i].second != w_t[j].second &&
                            v_t[i].second != x_t[k].second &&
                            w_t[j].second != x_t[k].second)
                    {
                        long long total = v[v_t[i].second] +
                                          w[w_t[j].second] +
                                          x[x_t[k].second];
                        mx = max(mx, total);
                    }
                }
            }
        }

        cout << mx << endl;
    }

    return 0;
}
