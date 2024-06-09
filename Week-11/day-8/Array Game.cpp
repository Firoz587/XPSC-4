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
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        ll ans = -1;
        if(k==1)
        {
            ans = v[0];
            for(int i=1;i<n;i++)
            {
                ans = min(ans,v[i]-v[i-1]);
            }
            cout<<ans<<endl;
        }
        else if(k==2)
        {
            ll ans=v[0];
            for(int i=0;i<n-1;i++)
            {
                for(int j=i+1;j<n;j++)
                {
                    ll x=abs(v[j]-v[i]);
                    ans=min(ans,x);
                    int indx=-1;
                    int l=0,h=n-1;
                    while(l<=h)
                    {
                        int m=(l+h)/2;
                        if(v[m]>=x)
                        {
                            indx=m;
                            h=m-1;
                        }
                        else
                        {
                            l=m+1;
                        }
                    }
                    if(indx==-1)
                    {
                        ans=min(ans,x-v[n-1]);
                    }
                    else
                    {
                        ans=min(ans,v[indx]-x);
                    }
                    if(indx==0)
                    {
                        ans=min(ans,v[0]-x);
                    }
                    else
                    {
                        ans=min(ans,abs(x-v[indx-1]));
                    }
                }
            }
            cout<<ans<<endl;
        }
        else if(k>2)
        {
            cout<<0<<endl;
        }
    }
    return 0;
}
