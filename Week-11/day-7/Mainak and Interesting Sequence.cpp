/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (m < n)
        {
            cout << "No\n";
            continue;
        }
        vector<int>v(n+1);
        int sum=0;
        if(n%2==0 && m%2==0)
        {
            cout<<"Yes\n";
            for(int i=1;i<n-1;i++)
            {
                v[i]++;
                sum++;
            }
            v[n-1]=(m-sum)/2;
            v[n]=v[n-1];
        }
        else if(n%2==1 && m%2==0)
        {
            cout<<"Yes\n";
             for(int i=1;i<n;i++)
            {
                v[i]++;
                sum++;
            }
            v[n]=m-sum;
        }
        else if(n%2==0 && m%2==1)
        {
            cout<<"No\n";
            continue;
        }
        else if(n%2==1 && m%2==1)
        {
            cout<<"Yes\n";
             for(int i=1;i<n;i++)
            {
                v[i]++;
                sum++;
            }
            v[n]=m-sum;
        }
        for(int i=1;i<=n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
