#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int ans1=abs(a-1);
        int ans2=abs(c-b)+abs(c-1);
        if(ans1==ans2)
            cout<<3<<endl;
        else if(ans1<ans2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
    return 0;
}

