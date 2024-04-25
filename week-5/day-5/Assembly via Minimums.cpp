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
        int m=(n*(n-1))/2;
        vector<int>a(m);
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<m;i+=--n)
        {
            cout<<a[i]<<" ";
        }
        cout<<a[m-1]<<endl;
    }
    return 0;
}
