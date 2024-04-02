#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        long long sum=0;
        for(auto x:v)
        {
            sum+=abs(x);
        }
        int cnt=0,ans=0;
        for(auto x:v)
        {
            if(x==0 && cnt==0)
            {
                continue;
            }
            if(x<=0)
            {
                cnt++;
            }
            else
            {
                if(cnt>0)
                {
                    ans++;
                }
                cnt=0;
            }
        }
        if(cnt>0)
        {
            ans++;
        }
        cout<<sum<<" "<<ans<<endl;
    }
    return 0;
}

