/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;
    if(n<=3)
        return true;
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    for(int i=5;i*i<=n;i+=6)
    {
        if(n%i==0 || n%(i+2)==0)
        {
            return false;
        }
    }
    return true;
}

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
        int x=1+n,cnt1=0,cnt2=0;
        while(true)
        {
            if(isPrime(x))
            {
                cnt1=x;
                break;
            }
            x++;
        }
        x+=n;
        while(true)
        {
            if(isPrime(x))
            {
                cnt2=x;
                break;
            }
            x++;
        }
        cout<<cnt1*cnt2<<endl;
    }
    return 0;
}
