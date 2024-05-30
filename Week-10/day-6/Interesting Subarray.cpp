#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        bool ok = false;
        for(int i=1;i<n;i++)
        {
            if(max(v[i],v[i-1])-min(v[i],v[i-1])>=2)
            {
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<endl;
                ok = true;
                break;
            }
        }
        if(!ok)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}