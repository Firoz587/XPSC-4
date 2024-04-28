/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
 bool ok (ll mid,ll x,vector<ll>&a)
        {
            for (int i = 0; i <a.size(); i++)
            {
                if(a[i]>=mid)
                    continue;
                ll d=mid-a[i];
                x-=d;
            }
            return x >= 0;
        }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

       // sort(a.begin(), a.end());

        ll l = 0, r = 1e10, mid, ans = 0;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (ok(mid,k,a))
            {
                ans =max(mid,ans);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
