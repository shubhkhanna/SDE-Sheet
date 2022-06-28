class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int ans = 0;
        
        for(int i=0;i<size(nums);i++){
            ans ^= nums[i];
        }
        
        return ans;
    }
};

// XOR Approach
// TC: O(N)
// SC: O(N)