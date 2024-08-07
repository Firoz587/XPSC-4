/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e6+5;
int n,m;
int a[N];
int b[N];
int c[N];
vector<pair<int,int>>all;
map<ll,ll>dp;

ll solve(int cur)
{
    if(dp.count(cur))
    {
        return dp[cur];
    }

    int low = 0, high = all.size()-1;
    int idx = -1;
    while(low <= high)
    {
        int mid = (low + high)/2;
        if(all[mid].second <= cur)
        {
            idx = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(idx == -1)
    {
        return dp[cur] = 0;
    }

    ll diff = all[idx].first;
    ll need = all[idx].second;

    ll smithing = (cur - need)/diff + 1;
    ll baki = cur - smithing * diff;

    ll ans = smithing * 2 + solve(baki);
    return dp[cur] = ans;
}

void TEST_CASES()
{
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        all.push_back({a[i]-b[i], a[i]});
    }
    for(int i=0; i<m; i++)
    {
        cin>>c[i];
    }

    sort(all.begin(),all.end());

    vector<pair<int,int>>tmp;
    for(int i=0; i<n; i++)
    {
        if(tmp.empty())
        {
            tmp.push_back(all[i]);
            continue;
        }
        if(tmp.back().second > all[i].second)
        {
            tmp.push_back(all[i]);
        }
    }
    all = tmp;

    ll ans = 0;
    for(int i=0; i<m; i++)
    {
        ans += solve(c[i]);
    }
    cout<<ans<<"\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
//    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
