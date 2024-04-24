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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v[i]+=(i+1);
        }
        sort(v.begin(),v.end());
        long long sum=0,cnt=0;
        for(int i=0;i<n;i++)
        {
            if(sum+v[i]>k)
                break;
            sum+=v[i];
            cnt++;
        }
        cout<<cnt<<endl;

    }
    return 0;
}
