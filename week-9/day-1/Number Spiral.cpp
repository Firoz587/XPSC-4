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
        ll i, j;
        cin >> i >> j;

        ll maxVal = max(i, j);
        ll result;

        if (maxVal % 2 == 0)
        {
            if (i == maxVal)
            {
                result = maxVal * maxVal - (j - 1);
            }
            else
            {
                result = (maxVal - 1) * (maxVal - 1) + i;
            }
        }
        else
        {
            if (j == maxVal)
            {
                result = maxVal * maxVal - (i - 1);
            }
            else
            {
                result = (maxVal - 1) * (maxVal - 1) + j;
            }
        }

        cout << result << endl;
    }

    return 0;
}
