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
        int b;
        cin>>b;
        int cur=-1;
        int i=0;
        while(i<n)
        {
            int x;
            cin>>x;
            if((x&b)==b)
                cur &= x;
            i++;
        }
        if(cur==b)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

