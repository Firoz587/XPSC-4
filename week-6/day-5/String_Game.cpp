/******** Name :- Md Firoz Islam ***********
University :- Northern University Bangladesh
********** Dhaka,Bangladesh ***************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin>>s1>>s2;
    int a[s1.size()];
    for(int i=0; i<s1.size(); i++)
    {
        cin>>a[i];
        a[i]-=1;
    }
    auto ok=[&](int m)
    {
        unordered_set<int>st;
        for(int i=0; i<m; i++)
        {
            st.insert(a[i]);
        }
        string res="";
        for(int i=0; i<s1.size(); i++)
        {
            if(st.find(i)==st.end())
            {
                res+=s1[i];
            }
        }
        int p1=0,p2=0;
        while(p1<res.size() && p2<s2.size())
        {
            if(res[p1]==s2[p2])
            {
                p1++;
                p2++;
            }
            else
            {
                p1++;
            }
        }
        return (p2==s2.size());
    };
    int l=0,r=s1.size(),mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
