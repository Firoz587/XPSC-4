/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

bool isVowel(char c)
{
    static unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    return vowels.count(c) > 0;
}
void solve()
{
    string s,t;
    cin>>s>>t;
    int n=s.size();
    int m=t.size();
    if(n!=m)
    {
        no;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if ((isVowel(s[i]) && isVowel(t[i])) || (!isVowel(s[i]) && !isVowel(t[i])))
        {
            continue;
        }
        else
        {
            no;
            return;
        }
    }
    yes;
}
int main()
{
    faster;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

