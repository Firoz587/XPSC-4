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
        int n;
        cin >> n;
        int p=n;
        set<int>s;
        while(n--)
        {
            int x;
            cin>>x;
            s.insert(x);
        }
        int m=s.size();
        int s_s=p-m;
        if(s_s%2!=0)
        {
            cout<<m-1<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
    }

    return 0;
}
