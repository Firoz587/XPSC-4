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
        string s;
        cin>>s;
        int zero=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                if(zero>0)
                    zero--;
                else
                    break;
            }
            else
            {
                if(one>0)
                    one--;
                else
                    break;
            }
        }
        int ans=zero+one;
        cout<<ans<<endl;
    }
    return 0;
}
