long maximumSumSubarray(int K, vector<int> &a , int N){
        // code here
        int l=0,r=0;
        long long sum=0,ans=0;
        while(r<N)
        {
         sum+=a[r];
         if((r-l+1)==K)
         {
           ans=max(ans,sum);
           sum-=a[l];
           l++;
            r++;
         }
        else
        {
          r++;
        }
      }
      return ans;

    }
