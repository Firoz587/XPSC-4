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
    string s;
    cin>>s;
    string a,b;
    bool ok=false;
    a+=s[0];
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!='0'||ok)
        {
            b+=s[i];
            ok = true;
        }
        else
        {
            a+=s[i];
        }
    }
    if(b.size()==0) b+='0';
    int n=stoi(a),m=stoi(b);
    if(m>n && n!=0 && m!=0)
        cout<<n<< " "<<m<<endl;
    else
        cout<<-1<<endl;
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
