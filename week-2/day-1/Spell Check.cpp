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

        string s, s2 = "Timur";
        cin >> s;

        sort(s.begin(), s.end());
        sort(s2.begin(), s2.end());

        if (s == s2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
