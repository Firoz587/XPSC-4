/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n,s;
    cin >> n >>s;
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
        if(p_s.find(curr_s-s)!=p_s.end())
        {
            cnt_sub+=p_s[curr_s-s];
        }
        p_s[curr_s]++;
    }
    cout<<cnt_sub<<endl;
    return 0;
}
