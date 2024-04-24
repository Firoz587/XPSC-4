/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
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
        int n;
        cin>>n;
        ll neg=0,pos=0;
        for(int i=0;i<n;i++)
        {
            ll v;
            cin>>v;
            if(v>=0)
            {
                pos+=v;
            }
            else
            {
                if(pos+v>=0)
                    pos+=v;
                else
                {
                    v+=pos;
                    pos=0;
                    neg+=v;
                }
            }
        }
        cout<<abs(neg)<<endl;
    }
    return 0;
}


