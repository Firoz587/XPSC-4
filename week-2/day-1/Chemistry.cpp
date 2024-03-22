#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int freq[26]={0};
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            int v=s[i]-'a';
            freq[v]++;
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]%2!=0)
            {
                cnt++;
            }
        }
        int r=abs(cnt-k);
       // cout<<cnt<<" "<<r<<endl;
        if(r>1 && k<cnt)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
