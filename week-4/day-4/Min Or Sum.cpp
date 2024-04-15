#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int result=0;
        for(int i=0;i<n;i++)
        {
            int v;
            cin>>v;
            result=(result | v);
        }
        cout<<result<<endl;
    }
    return 0;
}
