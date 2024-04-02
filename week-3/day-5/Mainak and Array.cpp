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
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=0;
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,v[i]-v[i+1]);
        }
        ans=max(ans,v[n-1]-v[0]);
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mn=min(mn,v[i]);
        }
        ans=max(ans,v[n-1]-mn);
        int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,v[i]);
        }
        ans=max(ans,mx-v[0]);
        cout<<ans<<endl;
    }
    return 0;
}
