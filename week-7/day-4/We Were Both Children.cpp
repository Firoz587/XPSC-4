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
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<ll>freq(n+2,0);
         for(int i=0;i<n;i++)
        {
            if(v[i]>n)
                continue;
            freq[v[i]]++;
        }
        ll ans=0;
        for(int i=1;i<=n;i++)
        {
            ll h=0;
            for(int j=1;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    h+=freq[j];
                    if(j*j != i)
                    {
                        h+=freq[i/j];
                    }
                }
            }
            ans=max(ans,h);
        }
        cout<<ans<<endl;
    }
    return 0;
}
