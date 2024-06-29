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
        ll n;
        cin>>n;
        if(n&(n-1)==0)
        {
            cout<<0<<endl;
            continue;
        }
        vector<ll>v;
        for(ll i=0;i<=60;i++)
        {
            ll num=(1LL<<i);
            v.push_back(num);
        }
        string s=to_string(n);
        ll ans=1e9;
        ll sz=s.size();
        for(ll k=0;k<v.size();k++)
        {
            ll num = v[k];
            string t=to_string(num);
            ll sz1=t.size();
            ll res=0;
            ll i=0,j=0;
            while(i<sz && j<sz1)
            {
                if(s[i]==t[j])
                {
                    i++;
                    j++;
                }
                else
                {
                    res++;
                    i++;
                }
            }
            if(i==sz && j!=sz1)
            {
                res+=sz1-j;
            }
            else if(i!=sz && j==sz1)
            {
                res+=sz-i;
            }
            ans=min(ans,res);
        }
        cout<<ans<<endl;
    }
    return 0;
}
