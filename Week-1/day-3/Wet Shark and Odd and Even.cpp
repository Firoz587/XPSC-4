#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>v(n),o,e;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]%2==0)
        {
            e.push_back(v[i]);
        }
        else
        {
            o.push_back(v[i]);
        }
    }
    long long ans=0;
    long long sum1=0,sum2=0;
    for(int i=0;i<e.size();i++)
    {
        sum1+=e[i];
    }
    sort(o.begin(),o.end());
    for(int i=0;i<o.size();i++)
    {
        sum2+=o[i];
    }
    if(sum2%2!=0)
    {
        sum2=sum2-o[0];
    }
    ans=sum1+sum2;
    cout<<ans<<endl;
    return 0;
}

