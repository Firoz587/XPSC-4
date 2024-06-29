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
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        ll sum=0;
        map<ll,int>freq;
        bool flag = true;
        for(int i=0;i<n;i++)
        {
            freq[v[i]]++;
            sum+=v[i];
        }
        priority_queue<ll>pq;
        pq.push(sum);
        while(!pq.empty())
        {
            ll s=pq.top();
            pq.pop();
            ll x=s/2;
            ll y=s-x;
            if(freq[x]>0)
            {
                freq[x]--;
            }
            else if(freq[x]==0 && x>1)
            {
                pq.push(x);
            }
            if(freq[y]>0)
            {
                freq[y]--;
            }
            else if(freq[y]==0 && y>1)
            {
                pq.push(y);
            }
            if(pq.size()>n+2)
            {
                flag=false;
                break;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(freq[v[i]]>0)
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
