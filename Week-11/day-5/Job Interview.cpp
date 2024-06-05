#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int N=n+m+1;
        vector<int> a1(N), a2(N);

        for(int i=0; i<N; i++)
        {
            cin>>a1[i];
        }
        for(int i=0; i<N; i++)
        {
            cin>>a2[i];
        }

        ll ed = 0, et = 0;
        int cd = 0,ct = 0;
        vector<int>mark1(a1.size()),mark2(a1.size());

        for (int i = 0; i < a1.size(); i++)
        {
            if (a1[i] > a2[i] && cd <= n)
            {
                ed += a1[i];
                cd += 1;
                mark1[i] = 1;
            }
            else if (a1[i] < a2[i] && ct < m)
            {
                ed += a2[i];
                ct += 1;
                mark1[i] = 0;
            }
            else if (cd <= n)
            {
                ed += a1[i];
                cd += 1;
                mark1[i] = 1;
            }
            else
            {
                ed += a2[i];
                ct += 1;
                mark1[i] = 0;
            }
        }

        ct = 0;
        cd = 0;

        for (int i = 0; i < a1.size(); i++)
        {
            if (a1[i] < a2[i] && ct <= m)
            {
                et += a2[i];
                ct += 1;
                mark2[i] = 0;
            }
            else if (a1[i] > a2[i] && cd < n)
            {
                et += a1[i];
                cd += 1;
                mark2[i] = 1;
            }
            else if (ct <= m)
            {
                et += a2[i];
                ct += 1;
                mark2[i] = 0;
            }
            else
            {
                et += a1[i];
                cd += 1;
                mark2[i] = 1;
            }
        }

        for (int i = 0; i < a1.size(); i++)
        {
            ll v1 = 0;
            if (mark1[i] == 1)
            {
                v1 = ed - a1[i];
            }
            else if (mark2[i] == 0)
            {
                v1 = et - a2[i];
            }
            cout << v1 << " ";
        }
        cout << endl;
    }
    return 0;
}
