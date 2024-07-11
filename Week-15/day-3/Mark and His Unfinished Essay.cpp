/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
     int n,c,q;
     cin>>n>>c>>q;
     string s;
     cin>>s;
     vector<pair<ll,ll>>o(c);
     vector<ll>l(c+1);
     l[0]=n;
     for(int i=0;i<c;i++)
     {
         cin>>o[i].first>>o[i].second;
         o[i].first--;
         o[i].second--;
         l[i+1]=l[i]+(o[i].second-o[i].first+1);
     }
     for(int i=0;i<q;i++)
     {
         ll k;
         cin>>k;
         k--;
         for(int j=c;j>0;j--)
         {
             if(k>=l[j-1])
             {
                 k-=l[j-1];
                 k=o[j-1].first+k;
             }
         }
         cout<<s[k]<<endl;
     }
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

