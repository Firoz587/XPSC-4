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
    cin >> t;
    while(t--)
    {
        ll x,n,m;
        cin>>x>>n>>m;

        ll flag=false;
        while((x>20)&&(n>0))
        {
            x = x/2 + 10;
            n--;
        }

        while((x>0)&&(m>0))
        {
            x = x-10;
            m--;
            if(x<=0)
            {
                flag=true;
                break;
            }
        }

        if(flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }


    }
    return 0;
}
