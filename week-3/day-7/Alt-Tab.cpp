#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<string>s;
    for(int i=0;i<n;i++)
    {
        string s2;
        cin>>s2;
        s.push(s2);
    }
    set<string>ans;
    while(!s.empty())
    {
        if(ans.find(s.top())==ans.end())
        {
            ans.insert(s.top());
            string p=s.top();
            if(p.size()>2)
            {
                cout<<p.substr(p.size()-2);
            }
        }
        s.pop();
    }
    return 0;
}
