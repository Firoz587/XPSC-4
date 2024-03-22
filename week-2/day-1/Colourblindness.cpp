#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s, s2;
        cin >> s >> s2;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s2[i])
            {
                if(s[i]=='G' && s2[i]!='B' || s[i]=='B' && s2[i]!='G' || s[i]=='R' && s2[i]=='B' || s[i]=='B' && s2[i]=='R' || s[i]=='R' && s2[i]=='G' || s[i]=='R' && s2[i]=='G')
                   {
                       flag=false;
                       break;
                   }
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}

