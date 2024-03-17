#include<bits/stdc++.h>
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
        char ch;
        string s;
        cin>>ch>>s;
        s+=s;
        bool flag=false;
        int cnt=0,result=0;
        if(ch=='g')
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='g')
            {
                result=max(cnt,result);
                flag=false;
            }
            if(s[i]==ch && flag==false)
            {
                flag=true;
                cnt=0;
            }
            if(flag)
                cnt++;
        }
        cout<<result<<endl;
    }
    return 0;
}
