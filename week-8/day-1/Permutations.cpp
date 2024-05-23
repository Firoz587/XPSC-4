/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    if(n==2 || n==3)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    else
    {
        vector<int>even,odd;
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        }
        for(auto x:even)
        {
            cout<<x<<" ";
        }
        for(auto x:odd)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
