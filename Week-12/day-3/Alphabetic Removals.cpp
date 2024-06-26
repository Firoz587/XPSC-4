/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    string s;
    cin>>n>>k>>s;
    multiset<char>m;
    for(char c:s)
    {
        m.insert(c);
    }
    multiset<char>f;
    for(char c:m)
    {
        if(k)
        {
            f.insert(c);
            k--;
        }
        else
        {
            break;
        }
    }
    string ans="";
    for(char c:s)
    {
        auto x=f.find(c);
        if(x!=f.end())
        {
            f.erase(x);
        }
        else
        {
            ans+=c;
        }
    }
    cout<<ans<<endl;
    return 0;
}
