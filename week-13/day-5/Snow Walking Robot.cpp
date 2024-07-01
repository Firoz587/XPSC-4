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

    int q;
    cin >> q;

    while (q--)
    {
        string s;
        cin >> s;

        int L = 0, R = 0, U = 0, D = 0;

        for (char c : s)
        {
            if (c == 'L') L++;
            else if (c == 'R') R++;
            else if (c == 'U') U++;
            else if (c == 'D') D++;
        }
        int h_m = min(L, R);
        int v_m = min(U, D);

        if (h_m == 0 && v_m > 0)
        {
            cout << "2\nUD\n";
        }
        else if (v_m == 0 && h_m > 0)
        {
            cout << "2\nLR\n";
        }
        else
        {
            int t_m = 2 * h_m + 2 * v_m;

            cout << t_m << "\n";
            for (int i = 0; i < h_m; i++) cout << 'L';
            for (int i = 0; i < v_m; i++) cout << 'U';
            for (int i = 0; i < h_m; i++) cout << 'R';
            for (int i = 0; i < v_m; i++) cout << 'D';
            cout << "\n";
        }
    }

    return 0;
}
