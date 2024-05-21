/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll isPrime(ll n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(l<=3 && r<=3)
            cout<<-1<<endl;
        else if(r-l>=1)
        {
            if(r%2!=0)
                r--;
            cout<<r/2<<" "<<r/2<<endl;
        }
        else if(isPrime(l)==l)
            cout<<-1<<endl;
        else
            cout<<isPrime(l)<<" "<<l-isPrime(l)<<endl;
    }
    return 0;
}
