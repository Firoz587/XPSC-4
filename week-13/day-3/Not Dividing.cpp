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
        vector<int>v(n+2);
        for(int i=1;i<=n;i++)
        {
            cin>>v[i];
            if(v[i]==1)
            {
                v[i]++;
            }
        }
        for(int i=2;i<=n;i++)
        {
            if(v[i]%v[i-1]==0)
            {
                v[i]++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
