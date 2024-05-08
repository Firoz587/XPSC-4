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
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int>p;
        while(q--)
        {
            int x;
            cin>>x;
            if(p.empty() || p.back()>x)
            {
                p.push_back(x);
            }
        }
        for(int i=0;i<n;i++)
        {
            for(auto it:p)
            {
                if(v[i]%(1<<it)==0)
                {
                    v[i]+=(1<<(it-1));
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
