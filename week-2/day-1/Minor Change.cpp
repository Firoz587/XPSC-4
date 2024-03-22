#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int cnt=0;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]!=s2[i])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

