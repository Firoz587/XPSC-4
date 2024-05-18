/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
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
        int a,b,l;
        cin>>a>>b>>l;
        int ans=0,cnt1=0,cnt2=0;
        set<int>s;
        for(int i=0;i<21;i++)
        {
            int x1=pow(a,i);
            if(l%x1==0)
            {
                int v1=(l/x1);
                for(int j=0;j<21;j++)
                {
                    int x2=pow(b,j);
                    if(v1%x2==0)
                    {
                        s.insert(v1/x2);
                    }
                }
            }
        }
        cout<<s.size()<<endl;
    }
    return 0;
}
