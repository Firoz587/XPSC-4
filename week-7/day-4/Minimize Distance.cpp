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
        ll n,k,ans=0;
        cin>>n>>k;
        vector<ll>v1,v2;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>0)
                v1.push_back(x);
            else if(x<0)
                v2.push_back(-x);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=v1.size()-1;i>=0;i-=k)
        {
            ans+=2*v1[i];
        }
        for(int i=v2.size()-1;i>=0;i-=k)
        {
            ans+=2*v2[i];
        }
        ll r;
        if(v1.empty())
           r=0;
        else
            r=v1.back();
        ll l;
        if(v2.empty())
           l=0;
        else
            l=v2.back();
        //cout<<r<<" "<<l<<endl;
        ans-=max(r,l);
        cout<<ans<<endl;
    }
    return 0;
}
