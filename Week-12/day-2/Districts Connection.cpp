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
        vector<int>v(n);
        unordered_map<int,int>mp;
        int m=0;
        int s=-1;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
            m=max(m,mp[v[i]]);
        }
        if(m==n)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        for(int i=1; i<n; i++)
        {
            if(v[i]!=v[0])
            {
                s=i;
                break;
            }
        }
        for(int i=1; i<n; i++)
        {
            if(v[i]!=v[0])
            {
                cout<<1<<" "<<i+1<<endl;
            }
            else
            {
                cout<<s+1<<" "<<i+1<<endl;
            }
        }
    }
    return 0;
}
