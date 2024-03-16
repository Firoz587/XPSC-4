#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,cnt1=0;
    char r;
    int cnt[26]={0};
    for(i=0;i<s.size();i++)
    {
        int v=s[i]-'a';
        cnt[v]++;
    }
    for(i=0;i<26;i++)
    {
        if(cnt[i]==0)
        {
            cnt1++;
           r=i+'a';
           break;
        }
    }
     if(cnt1==0)
     {
         cout<<"None"<<"\n";
     }
     else
     {
         cout<<r<<endl;
     }

    return 0;
}
