class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int n = size(nums);
        
        return nums[n-k];
    }
};