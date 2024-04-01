#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        ll n,k,q;
        cin>>n>>k>>q;
        ll arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans=0,cnt=0,m;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=q)
            {
                cnt++;
            }
            else
            {
                if(cnt>=k)
                {
                    m=cnt-k+1;
                    ans+=((m*(m+1))/2);
                }
                cnt=0;
            }
        }
        if(cnt!=0 && cnt>=k)
        {
            m=cnt-k+1;
            ans+=((m*(m+1))/2);
        }
        cout<<ans<<endl;
    }
    return 0;
}



