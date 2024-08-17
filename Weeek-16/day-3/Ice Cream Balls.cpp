/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    ll n;cin>>n;
    ll l=1,h=1e10,ans=1;
    while(l<=h)
    {
        ll m = (l+h)/2;
        ll k = (m*(m-1)/2);
        if(k<=n)
        {
            ans=max(ans,m);
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    ll k = ans*(ans-1)/2;
    cout<<ans+(n-k)<<endl;
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
       Firoz();
    }
    return 0;
}
