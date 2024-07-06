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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        v[i]=c-'0';
    }
    int cnt=0,ans=0;
    if(!v[0])
    {
        ans++;
        cnt=0;
    }
    for(int i=1;i<n;i++)
    {
        if(v[i]==1)
        {
            if(i-cnt-k<=0)
            {
                ans--;
            }
            cnt=i;
        }
        else
        {
            if(i-cnt-k>0)
            {
                ans++;
                cnt=i;
            }
        }
    }
    cout<<ans<<endl;
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


