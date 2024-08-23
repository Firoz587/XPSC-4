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
    string str;
    cin>>str;
    int s=0,e=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='B'&& s==0)
            s=i+1;
        if(str[i]=='B'&& s!=0)
            e=i+1;
    }
    cout<<abs(s-e)+1<<endl;
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
