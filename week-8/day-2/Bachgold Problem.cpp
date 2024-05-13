/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << n / 2 << endl;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << "3 ";
        for (int i = 0; i < (n - 3) / 2; i++)
        {
            cout << 2 << " ";
        }
    }
    cout << endl;

    return 0;
}
