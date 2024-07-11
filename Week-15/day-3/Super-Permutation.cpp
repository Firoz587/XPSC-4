/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz()
{
    int n;
    cin >> n;
    if (n==1)
    {
        cout <<1<<'\n';
        return;
    }

    if (n%2)
        cout<<-1<<'\n';
    else
    {
        int j=1;
        for (int i=n;i>0;i--)
        {
            if (i % 2)
            {
                cout<<j<< ' ';
                j+= 2;
            }
            else
                cout<<i<< ' ';
        }
        cout <<'\n';
    }
}
int main()
{
    faster;
    int t=1;
    cin>>t;
    while(t--)
    {
        Firoz();
    }
    return 0;
}

