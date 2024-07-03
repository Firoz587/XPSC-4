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
    string s;
    cin>>s;
    int ans = (int)1e9+7;
    for(int i=0; i<n-1; i++)
    {
        int num = (int)(s[i]-48)*10+(int)(s[i+1]-48);
        int sum=0;
        for(int j=0; j<i; j++)
        {
            if(s[j]=='0')
            {
                cout<<0<<endl;
                return;
            }
            if(s[j]>='2') sum+=(int)s[j]-48;
        }
        for(int j=i+2; j<n; j++)
        {
            if(s[j]=='0')
            {
                cout<<0<<endl;
                return;
            }
            if(s[j]>='2') sum+=(int)s[j]-48;
        }
        if(num==1 && sum>0)
            num=sum;
        else
            num+=sum;
        ans=min(ans,num);
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
