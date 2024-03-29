#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int arr[n+5],pre[n+5],suff[n+5];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        pre[0] = 0;
        pre[n+1] = 0;
        suff[0] = 0;
        suff[n+1] = 0;
        pre[1] = arr[1];
        for(int i=2; i<=n; i++)
        {
            pre[i]=arr[i]+pre[i-1];
        }
        suff[n]=arr[n];
        for(int i=n-1; i>=1; i--)
        {
            suff[i]=arr[i]+suff[i+1];
        }
        int l,r,k;
        while(q--)
        {
            cin>>l>>r>>k;
            long long sum=pre[l-1]+suff[r+1];
            int v=r-l+1;
            sum+=(v*k);
            if(sum%2==0)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
    }
    return 0;
}
