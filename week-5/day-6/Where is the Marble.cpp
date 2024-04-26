/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k=1;
    while(true)
    {
        int n,m;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            break;
        }
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        sort(v.begin(),v.end());
        cout<<"CASE# "<<k++<<":"<<endl;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            auto it=lower_bound(v.begin(),v.end(),x);
            if(it!=v.end() && *it==x)
            {
                cout<<x<<" found at "<<it-v.begin()+1<<endl;
            }
            else
            {
                cout<<x<<" not found"<<endl;
            }
        }
    }
    // v.clear();
    return 0;
}
