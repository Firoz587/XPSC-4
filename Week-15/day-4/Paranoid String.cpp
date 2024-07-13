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
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll cnt=n;

    for (int i=1; i<n; i++)
    {
        if (s[i]!=s[i-1])
        {
            cnt+=i;
        }
    }

    cout<<cnt<<endl;
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
