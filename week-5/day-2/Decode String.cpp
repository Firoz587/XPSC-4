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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0'))
            {
                int num = ((s[i]-'0')*10)+(s[i+1]-'0');
                char c=num+96;
                ans+=c;
                i+=2;
            }
            else
            {
                int num=s[i]-'0';
                char c=num+96;
                ans+=c;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

