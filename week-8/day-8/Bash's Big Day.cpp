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

    int n,on=0;
    cin>>n;
    vector<ll>v(n);
    vector<ll>cnt(100001,0);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        cnt[v[i]]++;
        if(v[i]==1)
        {
            on++;
        }
    }
    if(n==1|| on==n)
    {
        cout<<1<<endl;
    }
    else
    {
        ll mx=0;
        for(int i=2; i<=100000; i++)
        {
            ll curr=0;
            for(int j=i; j<=100000; j+=i)
            {
                curr+=cnt[j];
            }
            mx=max(mx,curr);
        }
        cout<<mx<<endl;
    }
    return 0;
}
