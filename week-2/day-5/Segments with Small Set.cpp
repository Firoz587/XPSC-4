#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int l=0,r=0;
    unordered_map<int, int>freq;
    long long ans=0;
    while (r<n)
    {
        freq[v[r]]++;
        while (freq.size()>k)
        {
            freq[v[l]]--;
            if (freq[v[l]]==0)
            {
                freq.erase(v[l]);
            }
            l++;
        }
        ans+=r-l+1;
        r++;
    }

    cout <<ans<< endl;

    return 0;
}

