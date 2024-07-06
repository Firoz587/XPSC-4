/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct cls
{
    int x;
    ll y;
};

bool cmp(const cls& a, const cls& b)
{
    if (a.x != b.x) return a.x > b.x;
    return a.y < b.y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> v[i][j];
            }
        }

        vector<cls> p(n);

        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            int total_time = 0;
            p[i].x = 0;
            p[i].y = 0;
            for (int j = 0; j < m; j++)
            {
                if (total_time + v[i][j] <= h)
                {
                    total_time += v[i][j];
                    p[i].x++;
                    p[i].y += total_time;
                }
                else
                {
                    break;
                }
            }
        }

        cls r= p[0];
        sort(p.begin(), p.end(), cmp);

        int cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (p[i].x == r.x && p[i].y == r.y)
            {
                break;
            }
            cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
