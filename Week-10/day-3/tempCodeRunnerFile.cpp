#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    pbds<pair<int, int>> lower, upper;
    ll sum_lower = 0, sum_upper = 0;
    vector<ll> result;

    auto add_element = [&](int value, int index)
    {
        if (lower.empty() || value <= lower.rbegin()->first)
        {
            lower.insert({value, index});
            sum_lower += value;
        }
        else
        {
            upper.insert({value, index});
            sum_upper += value;
        }
    };

    auto remove_element = [&](int value, int index)
    {
        if (lower.find({value, index}) != lower.end())
        {
            lower.erase({value, index});
            sum_lower -= value;
        }
        else
        {
            upper.erase({value, index});
            sum_upper -= value;
        }
    };

    auto rebalance = [&]()
    {
        while (lower.size() > upper.size() + 1)
        {
            auto it = lower.end();
            it--;
            pair<int, int> val = *it;
            lower.erase(it);
            sum_lower -= val.first;
            upper.insert(val);
            sum_upper += val.first;
        }

        while (lower.size() < upper.size())
        {
            auto it = upper.begin();
            pair<int, int> val = *it;
            upper.erase(it);
            sum_upper -= val.first;
            lower.insert(val);
            sum_lower += val.first;
        }
    };

    for (int r = 0; r < n; r++)
    {
        add_element(v[r], r);

        if (r >= k - 1)
        {
            rebalance();

            int median = lower.rbegin()->first;

            ll cost = (median * lower.size() - sum_lower) + (sum_upper - median * upper.size());
            result.push_back(cost);

            remove_element(v[r - k + 1], r - k + 1);
        }
    }

    for (const auto &cost : result)
    {
        cout << cost << " ";
    }
    cout << endl;

    return 0;
}
