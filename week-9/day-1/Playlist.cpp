/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    set<int>s;

    int mx = 0, l = 0;

    for(int i = 0; i < n; i++)
    {
        while(s.count(v[i]))
        {
            s.erase(v[l]);
            l++;
        }

        s.insert(v[i]);

        mx = max(mx, (int)s.size());
    }
    cout << mx << endl;

    return 0;
}
