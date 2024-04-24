/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,cnt=0,ans=0;
        cin>>a>>b>>n;
        vector<int>v(n);
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
            {
                ans+=v[i];
            }
            else
            {
                ans+=a-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

