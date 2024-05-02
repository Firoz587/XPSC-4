/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>k>>n;
    vector<long long>v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(),v.rend());
    auto ok=[&](long long m)
    {
        long long total=0;
        for(int i=0; i<n; i++)
        {
            total+=min(v[i],m);
        }
        return total/k>=m;
    };
    long long l=0,r=1e14,mid,ans=0;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid)&& n>=k)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}


