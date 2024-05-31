#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    string s, v;
    cin >> s;
    ll U = 0, D = 0, L = 0, R = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'N')
        {
            v.push_back('U');
            U++;
        }
        else if (s[i] == 'E')
        {
            v.push_back('R');
            R++;
        }
        else if (s[i] == 'S')
        {
            v.push_back('D');
            D++;
        }
        else
        {
            v.push_back('L');
            L++;
        }
    }

    if ((L % 2 != R % 2) || (U % 2 != D % 2))
    {
        cout << "NO" << '\n';
        return;
    }

    if (n == 4)
    {
        if (U == 1 && D == 1 && R == 1 && L == 1)
        {
            for (ll i = 0; i < n; i++)
            {
                if (v[i] == 'U' || v[i] == 'D')
                {
                    cout << "R";
                }
                else
                {
                    cout << "H";
                }
            }
            cout << '\n';
            return;
        }
    }

    vector<char> ans(n);
    ll x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (U == 0)
        {
            break;
        }
        if (v[i] == 'U')
        {
            if (x)
            {
                ans[i] = 'R';
            }
            else
            {
                ans[i] = 'H';
            }
            x ^= 1;
            U--;
        }
    }
    x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (D == 0)
        {
            break;
        }
        if (v[i] == 'D')
        {
            if (x)
            {
                ans[i] = 'R';
            }
            else
            {
                ans[i] = 'H';
            }
            x ^= 1;
            D--;
        }
    }
    x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (R == 0)
        {
            break;
        }
        if (v[i] == 'R')
        {
            if (x)
            {
                ans[i] = 'R';
            }
            else
            {
                ans[i] = 'H';
            }
            x ^= 1;
            R--;
        }
    }
    x = 1;
    for (ll i = 0; i < n; i++)
    {
        if (L == 0)
        {
            break;
        }
        if (v[i] == 'L')
        {
            if (x)
            {
                ans[i] = 'R';
            }
            else
            {
                ans[i] = 'H';
            }
            x ^= 1;
            L--;
        }
    }

    bool ok = false;
    for (ll i = 0; i < n - 1; i++)
    {
        if (ans[i] != ans[i + 1])
        {
            ok = true;
            break;
        }
    }

    if (ok)
    {
        for (auto val : ans)
        {
            cout << val;
        }
        cout << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    t = 1;
    cin >> t;

    while(t--)
    {
        solve();
    }
    return 0;
}
