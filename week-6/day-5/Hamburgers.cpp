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

    string s;
    cin>>s;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    ll r;
    cin>>r;

    auto ok=[&](ll m)
    {
        ll b = max(0LL, m * count(s.begin(), s.end(), 'B') - n1);
        ll p_s = max(0LL, m * count(s.begin(), s.end(), 'S') - n2);
        ll c = max(0LL, m * count(s.begin(), s.end(), 'C') - n3);

        return p1*b + p2*p_s + p3*c <= r;
    };
    ll l=0,h=1e13,mid,ans=0;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}



