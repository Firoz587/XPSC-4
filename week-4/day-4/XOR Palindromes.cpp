#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,flag=0;
        cin>>n;
        string s,ans="";
        cin>>s;
        for(int i=0;i<n/2;i++)
        {
            m+=(s[i]!=s[n-i-1]);
        }
        for(int i=0;i<m;i++)
        {
            ans+="0";
        }
        if(n%2 != 0)
        {
            for(int i=m;i<=(n-m);i++)
            {
                ans+="1";
            }
        }
        else
        {
            for(int i=m;i<=(n-m);i++)
            {
                if(flag%2 == 0)
                    ans+="1";
                else
                    ans+="0";
                flag++;
            }
        }
        for(int i=0;i<m;i++)
        {
            ans+="0";
        }
        cout<<ans<<endl;
    }
    return 0;
}
