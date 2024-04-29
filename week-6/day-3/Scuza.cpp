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
        int n,q;
        cin>>n>>q;
        vector<ll>v(n+1,0);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<ll>pre_sum(n+2,0);
        for(int i=1; i<=n; i++)
        {
            pre_sum[i]=(v[i]+pre_sum[i-1]);
        }
        vector<ll>ans(q);
        vector<pair<ll,ll>>k(q);
        for(int i=0; i<q; i++)
        {
            cin>>k[i].first;
            k[i].second=i;
        }
        sort(k.begin(),k.end());
        int cnt=0;
        for(int i=0; i<q; i++)
        {
            while(true)
            {
                if(cnt==n || v[cnt+1]>k[i].first)
                    break;
                cnt++;
            }
            ans[k[i].second]=pre_sum[cnt];
        }
        for(int i=0; i<q; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
