#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        int  arr[n],a[m];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<m;i++) cin>>a[i];
        sort(arr,arr+n);
        sort(a,a+m);
        int c_e=n-1;
        int o_e=m-1;
        long long ans=0;
        while(c_e>=0 && o_e>=0)
        {
            long long cap=arr[c_e];
            long long out=a[o_e];
            ans+=min(cap,h*out);
            c_e--;
            o_e--;
        }
        c_e=0;
        o_e=0;
        long long  ans2=0;
        while(c_e<n && o_e<m)
        {
            long long cap=arr[c_e];
            long long out=a[o_e];
            ans2+=min(cap,h*out);
            c_e++;
            o_e++;
        }
        cout<<max(ans,ans2)<<endl;
    }
    return 0;
}
