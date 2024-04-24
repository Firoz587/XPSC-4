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
        string s1,s2;
        cin>>s1>>s2;
        int cnt=0;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=0;j<s2.size();j++)
            {
                int x=i,y=j;
                int len=0;
                while(x<s1.size() && y<s2.size() && s1[x++] == s2[y++])
                {
                    len++;
                }
                cnt=max(cnt,len);
            }
        }
        int ans=(s1.size())+(s2.size());
        cout<<ans-(cnt*2)<<endl;
    }
    return 0;
}
