#include<bits/stdc++.h>
using namespace std;

int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        {
          return 0;
        }
      int psum[n];
      psum[0] = nums[0];
      for (int i = 1; i < n; i++) 
      {
        psum[i] += psum[i - 1] + nums[i];
      }
      int total_sum = psum[n - 1];
      if(total_sum-psum[0]==0)
                return 0;
      for (int i = 1; i < n; i++) {
        if(psum[i-1]==total_sum-psum[i]) {
          return i;
        }
      }
      return -1;
    }

    int main()
    {
        vector<int>ans={2,3,-1,8,4};
        int ap=findMiddleIndex(ans);
        cout<<ap<<endl;
        return 0;
    }