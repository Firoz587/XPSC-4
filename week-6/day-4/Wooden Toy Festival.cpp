/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        sort(v.rbegin(),v.rend());
        auto ok=[&](int m)
        {
            vector<int>r;
            int x=v[0]-m;
            r.push_back(x);
            for(int i=1;i<n;i++)
            {
                if(abs(x-v[i])>m)
                {
                    x=v[i]-m;
                    r.push_back(x);
                }
            }
            if(r.size()<=3)
            {
                return true;
            }
            return false;
        };
        int l=0,r=1e9,mid,ans=0;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
