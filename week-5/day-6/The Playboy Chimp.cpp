/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        auto l=lower_bound(v.begin(),v.end(),x);
        auto u=upper_bound(v.begin(),v.end(),x);
        int ans=-1,res=-1;
        if(l!=v.begin())
        {
            ans=*(--l);
        }
        if(u!=v.end())
        {
            res=*u;
        }
        if(ans==-1)
            cout<<"X ";
        else
            cout<<ans<<" ";
        if(res==-1)
            cout<<"X\n";
        else
            cout<<res<<"\n";
    }
    return 0;
}
