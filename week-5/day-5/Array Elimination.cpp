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


    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        ll bit[30];
        for(int i=0;i<30;i++) bit[i]=0;
        for(ll i=0; i<30; i++)
        {
            ll num=(1ll<<i);
            for(ll j=0; j<n; j++)
            {
                if((a[j]&num)!=0) bit[i]++;
            }
        }
        for(ll k=1; k<=n; k++)
        {
            bool flag=0;
            for(ll i=0; i<30; i++)
            {
                if((bit[i]%k)!=0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0) cout<<k<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


