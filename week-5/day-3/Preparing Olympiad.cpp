/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
*** Dhaka,Bangladesh ** Date:- 22/04/24 ***/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        ll n,l,r,x;
        cin>>n>>l>>r>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans=0;
        for(int i=0;i<(1<<n);i++)
        {
            int t=0;
            int mn=INT_MAX;
            int mx=INT_MIN;
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    t+=v[j];
                    mn=min(mn,v[j]);
                    mx=max(mx,v[j]);
                    cnt++;
                }
            }
            if(cnt>=2 && t>=l && t<=r && mx-mn>=x)
                ans++;
        }
        cout<<ans<<endl;
    return 0;
}

