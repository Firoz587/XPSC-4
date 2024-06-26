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
        int n,m,x;
        cin>>n>>m;
        vector<int>v[n+4];
        vector<int>ans[n+3];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>x;
                v[i].push_back(x);
            }
        }
        for(int i=0; i<n; i++)
        {
            sort(v[i].begin(),v[i].end());
        }
        for(int i=0; i<m; i++)
        {
            int mn=INT_MAX;
            int ind=-1;
            for(int j=0; j<n; j++)
            {
                if(v[j][0]<mn)
                {
                    mn=v[j][0];
                    ind=j;
                }
            }
            for(int j=0; j<n; j++)
            {
                if(j==ind)
                {
                    ans[j].push_back(v[j][0]);
                    v[j].erase(v[j].begin());
                }
                else
                {
                    ans[j].push_back(v[j][v[j].size()-1]);
                    v[j].pop_back();
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<ans[i].size(); j++)cout<<ans[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
