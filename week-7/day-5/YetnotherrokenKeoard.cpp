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
        stack<int>sm,ca;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')
                ca.push(i);
            if(s[i]>='a' && s[i]<='z' && s[i]!='b')
                sm.push(i);
            if(s[i]=='B' && !ca.empty())
            {
                s[ca.top()]='9';
                ca.pop();
            }
            if(s[i]=='b' && !sm.empty())
            {
                s[sm.top()]='9';
                sm.pop();
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='9')
                cout<<s[i];
        }
        cout<<endl;

    }
    return 0;
}
