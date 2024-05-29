#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int m=n;
    m+=n-2;
    cout<<3<<endl;
    cout<<"L"<<" "<<n-1<<endl;
    cout<<"R"<<" "<<n-1<<endl;
    cout<<"R"<<" "<<m+1<<endl;

    return 0;
}