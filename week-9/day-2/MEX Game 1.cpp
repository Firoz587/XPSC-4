/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        map<int,int>mp;
        vector<ll>mx;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        //sort(v.begin(),v.end());
        int ans=0;
        //bool flag=true;
        for(int i=0;i<=n+2;i++)
        {
            if(mp[i]==0)
            {
                ans=i;
                break;
            }
            else if(mp[i]==1)
            {
               mx.push_back(i);
            }
        }
        if(mx.size()==0 || mx.size()==1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<mx[1]<<endl;
        }
    }
    return 0;
}


