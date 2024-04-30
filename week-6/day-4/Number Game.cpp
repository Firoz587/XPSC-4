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

        auto ok=[&](int m)
        {
            multiset<int>s;
            for(auto x:v)
            {
                s.insert(x);
            }
            for(int i=1;i<=m;i++)
            {
                if(s.empty())
                    return false;
                int r=m-i+1;
                auto x=s.upper_bound(r);
                if(x==s.begin())
                    return false;
                x--;
                s.erase(x);
                if(!s.empty())
                {
                    x=s.begin();
                    int v=(*x);
                    v+=r;
                    s.erase(x);
                    s.insert(v);
                }
            }
            return true;
        };
        int l=0,r=n,mid,ans;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(ok(mid))
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
    }
    return 0;
}

