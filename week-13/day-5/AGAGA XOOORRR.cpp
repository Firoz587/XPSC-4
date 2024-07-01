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
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll Xor = 0;
        for (int i = 0; i < n; i++)
        {
            Xor ^= a[i];
        }

        if (Xor == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        ll curr_Xor = 0;
        int p = 0;
        for (int i = 0; i < n; i++)
        {
            curr_Xor ^= a[i];
            if (curr_Xor == Xor)
            {
                p++;
                curr_Xor = 0;
            }
        }

        if (p >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

