#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    while(k--)
    {
        int key;
        cin>>key;
        int l = 0, r = n - 1, mid, idx = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (key == a[mid])
            {
                idx = mid;
                break;
            }
            else if (key < a[mid])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (idx == -1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }

    }
    return 0;
}
