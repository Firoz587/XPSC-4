#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,cnt=0;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            cnt++;
            x=i;
            break;
        }
    }
    if(cnt>0)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<"-1"<<endl;

    }
    return 0;
}

