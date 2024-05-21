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
        int n,m;
        cin>>n>>m;
        vector<int>v[n+1];
        int x=1;
        for(int i=1;i<=n;i++)
        {
            v[i].resize(m+1);
            for(int j=1;j<=m;j++)
            {
                v[i][j]=x;
                x++;
            }
        }
        for(int i=2;i<=n;i+=2)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i+=2)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
