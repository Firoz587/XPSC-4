#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        for(int i=1; ;i*=2)
        {
            ll x=n/i;
            ll y=(x+1)/2;
            if(k<=y)
            {
                ll ans=(2*k)-1;
                cout<<ans*i<<endl;
                break;
            }
            else
            {
                k-=y;
            }
        }
    }
    return 0;
}