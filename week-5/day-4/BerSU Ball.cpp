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

    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int m;
    cin>>m;
    vector<int>g(m);
    for(int i=0; i<m; i++) cin>>g[i];
    sort(v.begin(),v.end());
    sort(g.begin(),g.end());
    int sum=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(v[i]==g[j] || v[i]+1==g[j] || v[i]-1==g[j])
            {
                sum+=1;
                g[j]=-1;
                break;
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}


