#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<int>v;
int dfs(int node,int n)
{
    int cnt=0;
    for(auto child:adj[node])
    {
        if(child!=n)
        {
            cnt+=dfs(child,node);
        }
    }
    if(cnt==0 && adj[node].size()==1)
    {
        cnt++;
    }
    v[node]=cnt;
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        adj.resize(n+1);
        v.resize(n+1,0);
        for(int i=0;i<n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,1);
        int q;
        cin>>q;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            long long ans=((long long)v[x]*(long long)v[y]);
            cout<<ans<<endl;
        }
        adj.clear();
        v.clear();
    }
    return 0;
}
