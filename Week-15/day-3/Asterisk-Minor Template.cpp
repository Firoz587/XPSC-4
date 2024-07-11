/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    string a,b;
    cin>>a>>b;
    map<string,int>ma,mb;
    string x,y;
    int n=a.size();
    int m=b.size();
    if(a==b)
    {
        yes
        cout<<a<<endl;
    }
    else
    {
        if(a[0]==b[0])
        {
            yes
            cout<<a[0]<<"*"<<endl;
        }
        else if(b[m-1]==a[n-1])
        {
            yes
            cout<<"*"<<a[n-1]<<endl;
        }
        else
        {
            string p,q;
            bool flag = false;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(a[i]==b[j] && a[i+1]==b[j+1] && i<n-1 && j<m-1)
                    {
                        p=a[i];
                        q=a[i+1];
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                yes
                cout<<"*"<<p<<q<<"*"<<endl;
            }
            else
            {
                no
            }
        }
    }
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
       Firoz();
    }
    return 0;
}

