/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);


int dfs(vector<int>& p, int l, int r)
{
    if (l == r)
    {
        return 0;
    }

    int m = (l + r) / 2;
    int left_swap = dfs(p, l, m);
    int right_swap = dfs(p, m + 1, r);

    if (left_swap == -1 || right_swap == -1)
    {
        return -1;
    }

    if (p[l] > p[m + 1])
    {
        swap_ranges(p.begin() + l, p.begin() + m + 1, p.begin() + m + 1);
        return left_swap + right_swap + 1;
    }

    return left_swap + right_swap;
}
int solve(vector<int>& p)
{
    return dfs(p, 0, p.size() - 1);
}

int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i=0; i<n; i++)
        {
            cin >> v[i];
        }

        vector<int> s_v = v;
        sort(s_v.begin(), s_v.end());

        int result = solve(v);
        if (result != -1 && is_sorted(v.begin(), v.end()))
        {
            cout << result << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

