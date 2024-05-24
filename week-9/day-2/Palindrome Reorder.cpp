/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();
    unordered_map<char,int>cnt;
    for(char c:s)
    {
        cnt[c]++;
    }
    int odd_cnt=0;
    char odd_char;
    for(auto &firoz : cnt)
    {
        if(firoz.second % 2 != 0)
        {
            odd_cnt++;
            odd_char = firoz.first;
        }
    }
    if(odd_cnt>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    string ans1="",ans2="";
    for(auto &firoz : cnt)
    {
        string half(firoz.second/2,firoz.first);
        ans1+=half;
        ans2=half+ans2;
    }
    string ans=ans1;
    if(odd_cnt==1)
    {
        ans+=odd_char;
    }
    ans+=ans2;
    cout<<ans<<endl;
    return 0;
}
