#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    vector<ll>l(m+1),r(m+1),d(m+1);
    for(int i=1; i<=m; i++)
    {
        cin>>l[i]>>r[i]>>d[i];
    }
    vector<ll>x(k+1),y(k+1);
    for(int i=1; i<=k; i++)
    {
        cin>>x[i]>>y[i];
    }
    vector<ll>cnt(m+2,0);
    for(int i=1; i<=k; i++)
    {
        cnt[x[i]]++;
        if(y[i]+1<=m)
        {
            cnt[y[i]+1]--;
        }
    }
    for(int i=1; i<=m; i++)
    {
        cnt[i]+=cnt[i-1];
    }
    vector<ll>diff(n + 2, 0);
    for (int i=1;i<=m;i++)
    {
        if (cnt[i] > 0)
        {
            diff[l[i]]+=cnt[i]*d[i];
            if (r[i] + 1 <= n)
            {
                diff[r[i]+1] -=cnt[i]*d[i];
            }
        }
    }

    for (int i=1;i<=n;i++)
    {
        diff[i]+=diff[i - 1];
        v[i]+=diff[i];
    }

    for (int i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
