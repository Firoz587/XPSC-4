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
        int ar[n+4];
        for(int i=0;i<n;i++)cin>>ar[i];
        if(ar[0]==ar[n-1])no
        else
        {
            yes
            cout<<ar[0]<<" ";
            for(int i=n-1;i>0;i--)cout<<ar[i]<<" ";
            cout<<endl;
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
