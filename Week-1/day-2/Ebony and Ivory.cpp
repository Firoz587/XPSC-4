#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    for(int i=0;i<=c/a;i++)
    {
        int e_b=i*a;
        int r_b=c-e_b;
        if(r_b%b==0)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }
    return 0;
}
