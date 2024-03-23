#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,cnt=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]==')' && cnt>0)
            {
                cnt--;
            }
            if(s[i]=='(')
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}



