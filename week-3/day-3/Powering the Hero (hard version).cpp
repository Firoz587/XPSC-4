#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        priority_queue<int> h;

        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            if(v[i] == 0)
            {
                if(!h.empty())
                {
                    sum += h.top();
                    h.pop();
                }
            }
            else
            {
                h.push(v[i]);
            }
        }

        cout << sum << endl;
    }
    return 0;
}

