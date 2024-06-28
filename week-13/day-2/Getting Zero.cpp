/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>ans(32770);
void fun()
{
    ans[0]=0;
    for(int i=1;i<=32768;i++)
    {
        int a=32768-i;
        int n=i;
        int cnt=0;
        while(n!=0)
        {
            n=(2*n)%32768;
            cnt++;
        }
        ans[i]=min(a,cnt);
        for(int j=max(0,i-16);j<=i-1;j++)
        {
            ans[j]=min(ans[j],ans[i]+(i-j));
        }
    }
}
int main()
{
    fun();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<ans[n]<<" ";
        cout<<endl;
    }
    return 0;
}
