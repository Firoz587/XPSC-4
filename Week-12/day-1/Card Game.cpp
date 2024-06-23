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
        int n;
        cin>>n;
        vector<ll>v(n);
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]>-1)
            {
                sum+=v[i];
            }
        }
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(v[i]>0)
                {
                    ans=max(ans,sum);
                    sum-=v[i];
                }
                else
                {
                    ans=max(ans,sum+v[i]);
                }
            }
            else
            {
                if(v[i]>0)
                {
                    sum-=v[i];
                    ans=max(ans,sum);
                }
                else
                {
                    ans=max(ans,sum);
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
