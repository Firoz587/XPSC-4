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

    ll x,y;
    cin>>x>>y;
    ll a = y*log(x);
    ll b = x*log(y);
    //cout<<a<<" "<<b<<endl;
    if(pow(x,y)==pow(y,x) && a==b)
    {
        cout<<"="<<endl;
    }
    else if(pow(x,y)>pow(y,x) || a>b)
    {
        cout<<">"<<endl;
    }
    else
    {
        cout<<"<"<<endl;
    }
    return 0;
}
