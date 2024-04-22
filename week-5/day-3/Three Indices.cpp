/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
** Dhaka,Bangladesh ** Date:- 22/04/24 ****/
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
        int arr[n+1];
        int a,b,c,cnt=0;
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=2;i<=n-1;i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                cnt++;
                a=i-1;
                b=i;
                c=i+1;
                break;
            }
        }
        if(cnt==0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
            cout<<a<<" "<<b<<" "<<c<<endl;
        }

    }
    return 0;
}

