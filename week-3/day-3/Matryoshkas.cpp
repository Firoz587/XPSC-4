#include<bits/stdc++.h>
using namespace std;

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
        int v[n+5];
        map<int,int>mp;
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v+1,v+n+1);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            int val=v[i];
            if(mp[v[i]]!=0)
            {
                ans++;
                while(mp[val]>0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
