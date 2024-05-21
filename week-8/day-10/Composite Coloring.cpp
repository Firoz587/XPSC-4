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

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k=0,p=0,q=0,sum=0,ans=0,tmp=0,cnt=0;
        vector<ll>v={2, 3,5,7,11,13,17,19,23,29,31};
        cin>>n;
        vector<ll>res(n,0),dif(50,-1);
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            for(int j=0;j<v.size();j++)
            {
                if(tmp%v[j]==0)
                {
                    if(dif[v[j]]==-1)
                        {
                            cnt++;
                            dif[v[j]]=cnt;
                        }
                    res[i]=dif[v[j]];
                    break;
                }
            }
        }
        cout<<cnt<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
