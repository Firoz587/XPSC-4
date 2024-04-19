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
    bool flag = false;
    int m=(1<<n);
    for(int i=0;i<m;i++)
    {
        int s=0;
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
                s+=v[j];
            else
                s-=v[j];
        }
        if(s%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
