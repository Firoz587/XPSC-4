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
    vector<ll>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll ex=0;
    for(ll i=0;i<n;i++){
        if(v[i]>=i){
            ex+=(v[i]-i);
        }
        else if(v[i]+ex>=i){
            ex-=(i-v[i]);
        }
        else{
            no
            return;
        }
    }
    yes
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