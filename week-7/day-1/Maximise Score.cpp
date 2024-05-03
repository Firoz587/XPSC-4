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
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int mn=INT_MAX;
        for(int i=1;i<n-1;i++)
        {
            int mx=max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1]));
            mn=min(mn,mx);
        }
        mn=min(mn,abs(v[0]-v[1]));
        mn=min(mn,abs(v[n-1]-v[n-2]));
        cout<<mn<<endl;
    }
    return 0;
}
