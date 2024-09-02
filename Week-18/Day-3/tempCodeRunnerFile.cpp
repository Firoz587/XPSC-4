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
    ll n,k;
    cin>>n>>k;
    if(n==k)
    cout<<1<<endl;
    else if(n>k)
    {
        if(n%k==0)
        cout<<1<<endl;
        else 
        cout<<2<<endl;
    }
    else
    {
        ll x=k/n;
        if(k%n==1)
        x++;
        cout<<x<<endl;
    }
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