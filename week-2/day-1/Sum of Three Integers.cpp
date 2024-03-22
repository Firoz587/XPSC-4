#include <bits/stdc++.h>
using namespace std;
int main()
{
    int K, S;
    cin >> K >> S;
    int count = 0;
    for (int a = 0; a <= K; a++)
    {
        for (int b = 0; b <= K; b++)
        {
            int c = S - a - b;
            if (c >= 0 && c <= K)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
