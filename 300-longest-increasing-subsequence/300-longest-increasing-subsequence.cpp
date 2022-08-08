class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        vector<int> ans;
        ans.push_back(nums[0]);
        
        for(int i = 1;i<size(nums);i++){
            if(nums[i] > ans.back()){
                ans.push_back(nums[i]);
            } else {
                int newIndex = lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
                ans[newIndex] = nums[i];
            }
        }
        
        return size(ans);        
    }
};

// TC: O(nlogn)
// SC: O(n)