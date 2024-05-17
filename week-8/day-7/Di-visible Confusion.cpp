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
        bool ok = true;
        for(int i=1;i<=n;i++)
        {
            ll x;
            cin>>x;
            bool flag = false;
            for(int j=i+1;j>=2;j--)
            {
                if(x%j!=0)
                {
                    flag=true;
                    break;
                }
            }
            ok &= flag;
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
