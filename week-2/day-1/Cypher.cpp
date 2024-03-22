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
        vector<int>v(n);
        vector<int>r;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            string s;
            cin>>s;
            for(int j=0;j<a;j++)
            {
                if(s[j]=='D')
                {
                    v[i]++;
                    if(v[i]==10)
                        v[i]=0;
                }
                else
                {
                    v[i]--;
                    if(v[i]==-1)
                        v[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
