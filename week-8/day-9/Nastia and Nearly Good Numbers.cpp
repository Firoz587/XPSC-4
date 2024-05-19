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

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b!=1)
        {
            cout<<"YES\n";
            cout<<(a*b)<<" "<<a<<" "<<(b+1LL)*a<<endl;
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
