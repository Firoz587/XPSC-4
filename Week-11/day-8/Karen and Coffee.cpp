/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],b[200005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,q;
    cin>>n>>k>>q;
    ll l,r;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    for(int i=0;i<=200001;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    for(int i=0;i<=200001;i++)
    {
        if(a[i]>=k)
        {
            b[i]=1;
        }
        else
        {
            b[i]=0;
        }
    }
    for(int i=0;i<=200001;i++)
    {
        b[i]=b[i]+b[i-1];
    }
    ll x,y;
    while(q--)
    {
        cin>>x>>y;
        cout<<b[y]-b[x-1]<<endl;
    }
    return 0;
}
