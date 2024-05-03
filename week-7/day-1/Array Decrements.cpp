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
        cin>>n;
        vector<int>a(n+3),b(n+3);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        bool flag=false;
        int mx=0;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(a[i]<b[i])
            {
                flag=true;
            }
            else
            {
                if(b[i]==0)
                {
                    mx=max(mx,a[i]);
                }
                else
                {
                    int dif=a[i]-b[i];
                    mp[dif]++;
                }
            }
        }
        int x=-1;
        for(auto val:mp)
        {
            x=val.first;
        }

        if(mp.size()>1)
            flag=true;
        if(x!=-1 && mx>x)
            flag=true;

        if(!flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
