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
    string s,t;
    cin>>s>>t;
    if(s.size()==t.size())
    {
        if(s==t)
        cout<<t<<endl;
        else
        cout<<-1<<endl;
        return;
    }
    if(s.size()>t.size())
    swap(s,t);
    int n=s.size();
    int m=t.size();
    int l=(n*m)/__gcd(n,m);
    string ans="";
    int k=0;
    for(int i=0;i<l;i++)
    {
        ans+=(char)s[k];
        k++;
        k%=n;
    }
    k=0;
    for(int i=0;i<l;i++)
    {
        if(ans[i]!=t[k])
        {
            cout<<-1<<endl;
            return;
        }
        k++;
        k%=m;
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
       Firoz();
    }
    return 0;
}