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
        int x=log2(n-1);
        x=(1<<x);
        for(int i=x-1;i>=0;i--)
        {
            cout<<i<<" ";
        }
        for(int i=x;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
