#include <bits/stdc++.h>
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
        int n;
        ll x;
        cin >> n >> x;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        multiset<ll> elements(a.begin(), a.end());

        int add = 0;

        for (const auto &num : a)
        {
            auto it = elements.find(num);
            if (it != elements.end())
            {
                elements.erase(it);

                ll tar = num * x;

                it = elements.find(tar);
                if (it != elements.end())
                {
                    elements.erase(it);
                }
                else
                {
                    add++;
                }
            }
        }

        cout << add << "\n";
    }

    return 0;
}
