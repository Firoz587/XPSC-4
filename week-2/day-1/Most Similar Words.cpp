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
        int n,m;
        cin >> n >>m;

        string a[n];
        int ans = INT_MAX, dis, sum;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n-1; i++)
        {
            for(int j = i+1; j < n; j++)
            {
                sum=0;
                for(int k = 0; k < m; k++)
                {
                    dis = abs(a[i][k] - a[j][k]);
                    sum+=dis;
                }
                if(sum < ans)
                {
                    ans = sum;
                }
            }
        }

        cout<< ans<<endl;
    }

    return 0;
}
