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
        int n,k;
        cin>>n>>k;
        vector<int>v(k);
        for(int i=0; i<k; i++) cin >>v[i];
        sort(v.begin(),v.end());
        int cnt=0,ans=0;
        for(int i=k-1; i>=0; i--)
        {
            int x=v[i];
            if(x<=cnt)
                break;
            int d = n-x;
            cnt+=d;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
