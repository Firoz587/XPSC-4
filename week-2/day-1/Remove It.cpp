#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    vector<int>k;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]!=x)
        {
            k.push_back(v[i]);
        }
    }
    for(int val:k)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}

