class Solution{
  public:
    int longestKSubstr(string S, int K) {
    // your code here
    int n=S.size();
    if(n==0 || K==0) return -1;
    unordered_map<char,int>freq;
    int l=0,r=0;
    int mx=-1;
    while(r<n)
    {
       freq[S[r]]++;
       while(freq.size() > K)
       {
           freq[S[l]]--;
           if(freq[S[l]]==0)
           {
               freq.erase(S[l]);
           }
           l++;
        }
        if(freq.size() == K)
        {
           mx=max(mx,r-l+1);
        }
       r++;
    }
    return mx;
    }
};
