/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        int left = lower_bound(v.begin(), v.end(), a) - v.begin();
        int right = upper_bound(v.begin(), v.end(), b) - v.begin();
       // cout<<right<<" "<<left<<endl;
        cout << right - left << endl;
    }
    return 0;
}



