#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=1; i<=n-1; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(i!=v[i])
        {
            ans=i;
            break;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
