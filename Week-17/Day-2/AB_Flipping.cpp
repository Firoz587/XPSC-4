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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=n-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            cnt--;
        }
        else
        {
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='A')
        {
            cnt--;
        }
        else
            break;
    }
    if(cnt>=0)
    {
        cout<<cnt<<endl;
    }
    else
    {
        cout<<0<<endl;
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
