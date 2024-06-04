#include<bits/stdc++.h>
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
        vector<ll>v(n,0),b(n);
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v[i]-=x;
        }
        for(int i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v[i]+=a;
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll cnt=0;
        ll l=0,r=n-1;
        while(l<r)
        {
            if(v[l]>-1 && v[r]>-1)
            {
                cnt++;
                l++;
                r--;
            }
            else if(v[l]<0 && v[r]<0)
            {
                break;
            }
            else if(v[l]>-1)
            {
                if(v[l]>=abs(v[r]))
                {
                    cnt++;
                    l++;
                    r--;
                }
                else
                {
                    r--;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
