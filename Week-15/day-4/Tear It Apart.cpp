/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);
void Firoz()
{
   string s;
   cin>>s;
   ll n=s.size();
   ll ans=n;
   for(int i=0;i<26;i++)
   {
       char c=('a'+i);
       ll cnt=0,mx=0;
       for(ll j=0;j<n;j++)
       {
           if(s[j]==c)
           {
               mx=max(cnt,mx);
               cnt=0;
           }
           else
           {
               cnt++;
           }
       }
       mx=max(mx,cnt);
       ans=min(ans,mx);
   }
   int res=0;
   while(ans>0)
   {
       ans/=2;
       res++;
   }
   cout<<res<<endl;
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        Firoz();
    }
    return 0;
}

