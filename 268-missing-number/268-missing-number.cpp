class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        
        for(int i=1;i<=size(nums);i++){
            ans ^= i;
        }
        
        for(int i=0;i<size(nums);i++){
            ans ^= nums[i];
        }
        
        return ans;
    }
};

// XOR Approach
// TC: O(N)
// SC: O(1)