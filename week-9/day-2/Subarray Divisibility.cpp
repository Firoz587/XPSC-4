/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<ll,int>p_s;
    ll curr_s=0;
    ll cnt_sub=0;
    p_s[0]=1;
    for(int i=0;i<n;i++)
    {
        curr_s+=a[i];
        ll modval = ((curr_s%n)+n)%n;
        cnt_sub+=p_s[modval];
        p_s[modval]++;
    }
    cout<<cnt_sub<<endl;
    return 0;
}


