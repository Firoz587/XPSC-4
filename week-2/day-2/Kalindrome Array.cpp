#include <bits/stdc++.h>
using namespace std;
bool palindrome(vector<int>v,int x)
{
    int n=v.size(),i=0,j=n-1;
    while(i<j)
    {
        if(v[i]==x)
        {
            i++;
        }
        else if(v[j]==x)
        {
            j--;
        }
        else if(v[i]!=v[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        //cout<<s.size()<<endl;
        bool flag=true;
        for(int i=0; i<n-1-i; i++)
        {
            if(v[i]!=v[n-1-i])
            {
                flag=palindrome(v,v[i]) || palindrome(v,v[n-1-i]);
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

