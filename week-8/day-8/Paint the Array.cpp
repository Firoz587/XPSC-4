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
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        ll g1=0,g2=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                g1=__gcd(g1,v[i]);
            }
            else
            {
                g2=__gcd(g2,v[i]);
            }
        }
        ll a=0,b=0;
        for(int i=1; i<n; i+=2)
        {
            if(v[i]%g1==0)
            {
                a=1;
                break;
            }
        }
        for(int i=0; i<n; i+=2)
        {
            if(v[i]%g2==0)
            {
                b=1;
                break;
            }
        }
        if(a==1 && b==1)
            cout<<0<<endl;
        else if(a==0)
            cout<<g1<<endl;
        else
            cout<<g2<<endl;
    }
    return 0;
}
