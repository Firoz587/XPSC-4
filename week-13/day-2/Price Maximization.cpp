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
        ll n,k;
        cin>>n>>k;
        ll ans=0;
        vector<ll>a(n+2),v;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            ans+=a[i]/k;
            v.push_back(a[i]%k);
        }
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        while(i<j)
        {
            if(v[i]+v[j]>=k)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
