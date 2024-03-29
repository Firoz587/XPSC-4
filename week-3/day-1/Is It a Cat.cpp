#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int m=0,e=0,o=0,w=0,r=0;
        bool flag=false;

        if(s[r]=='m' || s[r]=='M')
        {
            while(s[r]=='m' || s[r]=='M' && r<n)
            {
                m=1;
                r++;
            }
        }
        else
        {
            flag=true;
        }
        if(s[r]=='e' || s[r]=='E')
        {
            while(s[r]=='e' || s[r]=='E' && r<n)
            {
                e=1;
                r++;
            }
        }
        else
        {
            flag=true;
        }
        if(s[r]=='o' || s[r]=='O')
        {
            while(s[r]=='o' || s[r]=='O' && r<n)
            {
                o=1;
                r++;
            }
        }
        else
        {
            flag=true;
        }
        if(s[r]=='w' || s[r]=='W')
        {
            while(s[r]=='w' || s[r]=='W' && r<n)
            {
                w=1;
                r++;
            }
        }
        else
        {
            flag=true;
        }
        if(m==1 && e==1 && o==1 && w==1 && r==n && !flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
