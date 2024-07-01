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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<ll> v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(),v.end());

        vector<ll> g;
        for (int i = 0; i < m - 1; i++)
        {
            g.push_back(v[i + 1] - v[i] - 1);
        }
        g.push_back(n - v[m - 1] + v[0] - 1);

        sort(g.rbegin(),g.rend());

        ll ph = 0, ep= 0;
        for (int i = 0; i < g.size(); i++)
        {
            ll eg = g[i] - 2 * ep;
            if (eg <= 0) break;
            if (eg == 1)
            {
                ph++;
                ep++;
            }
            else
            {
                ph+= eg-1;
                ep+= 2;
            }
        }

        ll result = n-ph;
        cout << result << '\n';
    }

    return 0;
}
