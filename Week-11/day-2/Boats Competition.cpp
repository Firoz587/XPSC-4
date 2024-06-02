#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<ll>v(n+1);
        for(int i=1;i<=n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=1;i<=100;i++)
        {
            ll cnt=0;
            ll l=1,r=n;
            while(l<r)
            {
                if(v[l]+v[r]>i)
                    r--;
                else if(v[l]+v[r]<i)
                    l++;
                else
                {
                    cnt++;
                    l++;
                    r--;
                }
            }
            ans=max(ans,cnt);
        }
        cout<<ans<<endl;
    }
    return 0;
}
