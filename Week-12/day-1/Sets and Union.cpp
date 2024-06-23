/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v[n];
        vector<int>all;
        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            v[i].resize(k);
            for(int j=0;j<v[i].size();j++)
            {
                cin>>v[i][j];
                all.push_back(v[i][j]);
            }
        }
        sort(all.begin(),all.end());
        all.erase(unique(all.begin(),all.end()),all.end());
        int ans=0;
        for(int x=1;x<=50;x++)
        {
            vector<int>t;
            for(int i=0;i<n;i++)
            {
                bool flag = false;
                for(int j=0;j<v[i].size();j++)
                {
                    if(v[i][j]==x)
                    {
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                {
                    for(int j=0;j<v[i].size();j++)
                    {
                        t.push_back(v[i][j]);
                    }
                }
            }
            sort(t.begin(),t.end());
            t.erase(unique(t.begin(),t.end()),t.end());
            if(t!=all)
            {
                ans=max(ans,(int)t.size());
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
