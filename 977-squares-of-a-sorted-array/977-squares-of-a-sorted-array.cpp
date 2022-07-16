class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int k = size(nums)-1;
        int i = 0;
        int j = size(nums)-1;
        
        vector<int> ans(size(nums));
        
        while(k>=0){
            if(abs(nums[i])>abs(nums[j])){
                ans[k] = nums[i] * nums[i];
                k--;
                i++;
            }else{
                ans[k] = nums[j] * nums[j];
                k--;
                j--;
            }
        }
        
        return ans;
    }
};

// TC: O(N)
// SC: O(N)