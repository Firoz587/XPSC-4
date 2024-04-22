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
        int n=s.size();
        map<char,vector<int>>mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]].push_back(i+1);
        }
        if(s[0]>s[n-1])
        {
            int jmp=0;
            int cst = abs(s[0]-s[n-1]);
            vector<int>p;
            for(int i=0; i+s[0]>=s[n-1]; i--)
            {
                char c = s[0]+i;
                if(mp.find(c)!=mp.end())
                {
                    for(auto v:mp[c])
                        p.push_back(v);
                }
            }
            cout<<cst<<" "<<p.size()<<endl;
            for(auto x: p)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else if(s[0]<s[n-1])
        {
            int jmp=0;
            int cst = abs(s[0]-s[n-1]);
            vector<int>p;
            for(int i=0; i+s[0]<=s[n-1]; i++)
            {
                char c = s[0]+i;
                if(mp.find(c)!=mp.end())
                {
                    for(auto v:mp[c])
                        p.push_back(v);
                }
            }
            cout<<cst<<" "<<p.size()<<endl;
            for(auto x: p)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<0<<" "<<mp[s[0]].size()<<endl;
            for(auto x: mp[s[0]])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}


