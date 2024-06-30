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
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int wi=-1;
        int cnt=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]<=wi+d && cnt>0)
            {
                cnt-=1;
            }
            else
            {
                wi=v[i]+w;
                cnt=k-1;
                ans+=1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
