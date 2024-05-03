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
        int n;
        string s;
        cin>>n>>s;
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
            {
                o++;
            }
        }
        int flag=min(z,o);
        if(flag%2==0)
        {
            cout<<"Ramos"<<endl;
        }
        else
        {
            cout<<"Zlatan"<<endl;
        }
    }
    return 0;
}
