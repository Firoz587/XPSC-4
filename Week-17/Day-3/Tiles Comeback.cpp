/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        vector<int>suffix(n,0);
        suffix[n-1]=1;
        for(int i=n-2; i>=0; i--)
        {
            suffix[i]=suffix[i+1]+(v[i]==v[n-1]);
        }
        if(v[0]==v[n-1])
        {
            if(suffix[0]%k==0 || suffix[0]>=k)
            {
                yes
                continue;
            }
        }
        bool ok=false;
        int cnt=0;
        for(int i=0; i<=n-2; i++)
        {
            cnt+=(v[i]==v[0]);
            if(cnt%k==0 and suffix[i+1]>=k)
            {
                ok=true;
                break;
            }
        }

        if(ok)
        {
            yes
        }
        else
        {
            no
        }
    }
    return 0;
}
