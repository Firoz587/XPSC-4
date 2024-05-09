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
        ll n,m,x;
        cin>>n>>m>>x;
        ll v[m];
        vector<char>c(m);
        for(int i=0;i<m;i++)
        {
            cin>>v[i]>>c[i];
        }
        set<ll>ans;
        ans.insert(x);
        set<ll>result;
        for(int i=0;i<m;i++)
        {
            if(c[i]=='0')
            {
                set<ll>tans;
                for(auto &it:ans)
                {
                    ll a=it+v[i];
                    if(a>n) a-=n;
                    tans.insert(a);
                    if(i==m-1)
                    {
                        result.insert(a);
                    }
                }
                ans=tans;
            }
            else if(c[i]=='1')
            {
                set<ll>tans;
                for(auto &it:ans)
                {
                    ll a=it-v[i]+n;
                    if(a>n) a-=n;
                    tans.insert(a);
                    if(i==m-1)
                    {
                        result.insert(a);
                    }
                }
                ans=tans;
            }
            else
            {
                set<ll>tans;
                for(auto &it:ans)
                {
                    ll a=it+v[i];
                    if(a>n) a-=n;
                    tans.insert(a);
                    if(i==m-1)
                    {
                        result.insert(a);
                    }
                    a=it-v[i]+n;
                    if(a>n) a-=n;
                    tans.insert(a);
                    if(i==m-1)
                    {
                        result.insert(a);
                    }
                }
                ans=tans;
            }
        }
        cout<<result.size()<<endl;
        for(auto &it:result)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
