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
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            long long s=2*i;
            v.push_back(s);
        }
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
