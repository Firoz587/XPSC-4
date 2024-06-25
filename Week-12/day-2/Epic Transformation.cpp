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
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }
        priority_queue<int>q;
        for(auto x:m)
        {
            q.push(x.second);
        }
        while(q.size()>=2)
        {
            int a=q.top();
            q.pop();
            int b = q.top();
            q.pop();
            a--;
            b--;
            if(a) q.push(a);
            if(b) q.push(b);
        }
        if(q.size()==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<q.top()<<endl;
        }
    }
    return 0;
}
