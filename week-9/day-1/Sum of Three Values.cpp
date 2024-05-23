/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;
    vector<pair<int,int>>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i].first;
        v[i].second=i+1;
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        int target = x-v[i].first;
        int l=i+1,r=n-1;
        while(l<r)
        {
            long long sum = v[l].first+v[r].first;
            if(sum==target)
            {
                cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
                return 0;
            }
            if(sum<target)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
