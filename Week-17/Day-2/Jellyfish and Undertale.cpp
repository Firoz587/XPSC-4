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
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>v(n);
    int ans=0;
    if(b>=a)
    {
        ans=a;
        b=a;
    }
    else
    {
        ans=b;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]+1<=a)
            ans+=v[i];
        else
            ans+=a-1;
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
