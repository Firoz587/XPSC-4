#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n < 0 || n > 9999)
    {
        return 1;
    }
    cout<<setw(4)<<setfill('0')<<n<<endl;
    return 0;
}

