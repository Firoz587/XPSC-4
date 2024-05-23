/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int>v(n),h(m);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) cin>>h[i];

    multiset<int>ticket(v.begin(),v.end());
    for(auto x: h)
    {
        auto ans = ticket.upper_bound(x);
        if(ans==ticket.begin())
        {
            cout<<-1<<endl;
        }
        else
        {
            --ans;
            cout<<*ans<<endl;
            ticket.erase(ans);
        }
    }
    return 0;
}
