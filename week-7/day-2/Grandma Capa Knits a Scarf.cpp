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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=INT_MAX;
        for(int k=0; k<26; k++)
        {
            int i=0,j=n-1;
            int cnt=0;
            while(i<=j)
            {
                if(s[i]==s[j])
                {
                    i++;
                    j--;
                }
                else if(s[i]==char('a'+k))
                {
                    cnt++;
                    i++;
                }
                else if(s[j]==char('a'+k))
                {
                    cnt++;
                    j--;
                }
                else
                {
                    cnt=-1;
                    break;
                }
            }
            if(cnt!=-1)
            {
                ans=min(ans,cnt);
            }
        }
        if(ans==INT_MAX)
            ans=-1;
        cout<<ans<<endl;

    }
    return 0;
}
