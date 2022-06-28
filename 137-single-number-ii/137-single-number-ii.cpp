class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ansOne = 0;
        int ansTwo = 0;
        
        for(int i=0;i<size(nums);i++){
            ansOne ^= nums[i] & (~ansTwo);
            ansTwo ^= nums[i] & (~ansOne);
        }
        
        return ansOne;
    }
};

// Using Bit Manipulation
// TC: O(N)
// SC: O(1)