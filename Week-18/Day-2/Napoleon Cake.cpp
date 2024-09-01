/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define faster ios::sync_with_stdio(false),cin.tie(NULL);

void Firoz(){
    int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int temp = a[n-1];
        int b[n] = {0};
        for (int i =n-1;i>=0;i--)
        {
            if (temp != 0 || a[i] != 0)
            {
                b[i] = 1;
                temp = max(temp, a[i]);
                temp--;
            }
            else
            {
                temp = a[i];
            }
        }
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
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