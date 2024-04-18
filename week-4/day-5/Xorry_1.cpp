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
        int x=1;
        int y=0;
        int cnt=0;
        while(x*2<=n)
        {
            x=x*2;
            cnt++;
        }
        for(int i=cnt-1;i>=0;i--)
        {
            if((1<<i)&n)
            {
                y=y | (1<<i);
            }
        }
        cout<<y<<" "<<x<<endl;
    }
    return 0;
}
