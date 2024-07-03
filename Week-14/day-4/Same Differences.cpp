/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int>up;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        int x=v[i]-i;
        if(up.find(x)!=up.end())
        {
            cnt+=up[x];
        }
        up[x]++;
    }
    cout<<cnt<<endl;
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
