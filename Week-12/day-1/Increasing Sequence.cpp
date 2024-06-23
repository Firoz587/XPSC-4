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
        ll n,cnt = 1,x;
        cin>>n;
        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>x;
            if(x == cnt)
            {
                cnt++;
            }
            cnt++;
        }
        cout<<cnt-1<<endl;
    }
    return 0;
}
