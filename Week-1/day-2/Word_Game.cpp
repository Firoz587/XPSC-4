#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>mp;
        vector<string>s[3];
        for(int i=0;i<3;i++)
        {
            s[i].resize(n);
            for(int j=0;j<n;j++)
            {
                cin>>s[i][j];
                mp[s[i][j]]++;
            }
        }
        int cnt[3]={0};
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(mp[s[i][j]]==1)
                {
                    cnt[i]+=3;
                }
                else if(mp[s[i][j]]==2)
                {
                    cnt[i]+=1;
                }
            }
        }
        cout<<cnt[0]<<" "<<cnt[1]<<" "<<cnt[2]<<"\n";
    }
    return 0;
}

