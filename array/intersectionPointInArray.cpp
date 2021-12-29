#include<bits/stdc++.h>
using namespace std;

 vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    if (nums1.size() > nums2.size()) {
            return intersect(nums2, nums1);
        }

        unordered_map<int, int> lookup;
        for (const auto& i : nums1) {
            ++lookup[i];
        }

        vector<int> result;
        for (const auto& i : nums2) {
            if (lookup[i] > 0) {
                result.emplace_back(i);
                --lookup[i];
            }
        }

        return result;
 }
 int main()
 {
     vector<int>a={1,2,2,1};
     vector<int>b={2,2};
     vector<int>ans=intersect(a,b);
     for(int i=0;i<ans.size();i++)
     {
         cout<<ans[i]<<" "<<endl;
     }
     return 0;
 }