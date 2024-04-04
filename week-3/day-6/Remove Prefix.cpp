#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        set<int>s;
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            s.insert(v[i]);
            cnt++;
            if(cnt>s.size())
            {
                break;
            }
        }
        cout<<n-s.size()<<endl;
    }

    return 0;
}

