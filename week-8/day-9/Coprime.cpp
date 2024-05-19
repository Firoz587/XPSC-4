/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v[1005];

    for(int i=1; i<=1000; i++)
    {
        for(int j=1; j<=1000; j++)
        {
            if(__gcd(i,j)==1)
            {
                v[i].push_back(j);
            }
        }
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }

        vector<int> mxIndx(1005,-1);

        for(int i=1; i<=n; i++)
        {
            mxIndx[a[i]]=i;
        }

        int ans=0;

        for(int i=1; i<=1000; i++)
        {
            if(mxIndx[i]==-1)continue;

            if(i==1)
            {
                ans=max(ans,2*mxIndx[i]);
                continue;
            }
            for(auto x:v[i])
            {
                if(mxIndx[x]!=-1)
                {
                    ans=max(ans,mxIndx[i]+mxIndx[x]);
                }
            }
        }
        if(ans==0)
            ans=-1;
        cout<<ans<<endl;
    }
    return 0;
}
