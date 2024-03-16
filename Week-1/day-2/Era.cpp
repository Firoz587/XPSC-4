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
        vector<int>v(n);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
        }
        int cnt=0,ans=0;
        for(int i=1;i<=n;i++)
        {
            if(cnt+i<v[i])
            {
                int x=v[i]-(cnt+i);
                cnt+=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
