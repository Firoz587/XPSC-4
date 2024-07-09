/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll i=0,j=n;
    while(i<=j)
    {
        ll a=i+(j-i)/2;
        if((((n-a)*(n-a+1))/2)-a==k)
        {
            cout<<a;
            return;
        }
        else if((((n-a)*(n-a+1))/2)-a<k)
        {
            j=a-1;
        }
        else
        {
            i=a+1;
        }
    }
}
int main()
{
    faster;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

