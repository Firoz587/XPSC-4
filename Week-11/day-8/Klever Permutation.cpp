#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k)
{
    long max = n, min = 1L;
    vector<long> p(n);

    for (int i = 1; i <= k; ++i)
    {
        for (int j = i; j <= n; j += k)
        {
            if (i % 2 == 1)
            {
                p[j - 1] = min++;
            }
            else
            {
                p[j - 1] = max--;
            }
        }
    }

    string result;
    for (long i : p)
    {
        result += to_string(i) + " ";
    }
    cout << result.substr(0, result.size() - 1) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--)
    {
        int n,k;
        cin >> n >> k;
        solve(n, k);
    }

    return 0;
}

