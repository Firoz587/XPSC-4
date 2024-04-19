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
        int n;
        cin>>n;
        int x=INT_MAX;
        int y=0;
        for(int i=0;i<n;i++)
        {
            int v;
            cin>>v;
            x &= v;
            y |= v;
        }
        cout<<y-x<<endl;
    }
    return 0;
}

