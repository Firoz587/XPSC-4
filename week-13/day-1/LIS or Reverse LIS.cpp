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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        int cnt1=0;
        int cnt2=0;
        for(auto it:mp)
        {
            if(it.second>1)
            {
                cnt1++;
                cnt2++;
            }
            else
            {
                if(cnt1>cnt2)cnt2++;
                else cnt1++;
            }
        }
        cnt2++;
        cout<<min(cnt1,cnt2)<<endl;
    }
    return 0;
}
