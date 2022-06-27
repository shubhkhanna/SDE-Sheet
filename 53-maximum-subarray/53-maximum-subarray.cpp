class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int meh = nums[0];
        
        for(int i=0;i<size(nums);i++){
            sum += nums[i];
            
            if(sum > meh){
                meh = sum;
            }
            
            if(sum < 0) sum = 0;
        }
        
        return meh;
    }
};

// TC O(N)
// SC O(1)