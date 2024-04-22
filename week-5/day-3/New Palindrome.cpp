/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
** Dhaka,Bangladesh ** Date:- 22/04/24 ****/
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
        int n=s.size();
        bool flag=false;
        //int l=0,r=n-1;
        if(n%2==0 && n>2)
        {
            for(int i=1; i<n/2; i++)
            {
                if(s[i]!=s[i-1])
                {
                    flag=true;
                    break;
                }
            }
        }
        else if(n%2!=0 && n>3)
        {
            for(int i=1; i<n/2; i++)
            {
                if(s[i]!=s[i-1])
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
