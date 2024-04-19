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
        long long a,b;
        cin>>a>>b;
        cout<<(a^b)<<endl;
    }
    return 0;
}
