/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      if(n==1)
      {
          cout<<1<<endl;
          continue;
      }
      if(n==2)
      {
          cout<<"2 1"<<endl;
          continue;
      }
      vector<int>v(n,-1);
      v[n/2]=1;
      v[0]=2;
      v[n-1]=3;
      int c=4;
      for(int i=1;i<n;i++)
      {
          if(v[i]!=-1)
          {
              continue;
          }
          v[i]=c++;
      }
      for(int i=0;i<n;i++)
      {
          cout<<v[i]<<" ";
      }
      cout<<endl;
    }
    return 0;
}

