#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<int>a(m+1);
    for(int i=0;i<=m;i++) cin>>a[i];
    vector<vector<int>>all_mark;
    for(int i=0;i<=m;i++)
    {
        vector<int>v;
        for(int k=0;k<n;k++)
        {
            if((a[i]>>k)&1)
                v.push_back(1);
            else
                v.push_back(0);
        }
        all_mark.push_back(v);
    }
    int ans=0;
    vector<int>fedor_mark=all_mark[m];
    for(int i=0;i<all_mark.size()-1;i++)
    {
        vector<int>v=all_mark[i];
        int cnt=0;
        for(int k=0;k<n;k++)
        {
            if(fedor_mark[k]!=v[k])
                cnt++;
        }
        if(cnt<=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}

