#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    long long mx = 1;
    long long curr = x;
    while (true)
    {
        if (curr * 2 <= y)
        {
            curr *= 2;
            mx++;
        }
        else
        {
            break;
        }
    }

    cout << mx << endl;
    return 0;
}

