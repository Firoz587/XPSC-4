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
        string a,b;
        cin>>a>>b;
        int ans= a.size()+b.size();
        for(int i=0;i<b.size();i++)
        {
            int p2=i;
            for(int p1=0;p1<a.size() && p2<b.size();p1++)
            {
                if(a[p1]==b[p2])
                {
                    p2++;
                }
            }
            int need = a.size()+b.size()-(p2-i);
            ans=min(ans,need);
        }
        cout<<ans<<endl;
    }
    return 0;
}
