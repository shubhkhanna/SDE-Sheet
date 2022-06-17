class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        
        for(int i=0;i<size(nums);i++){
            for(int j=i+1;j<size(nums);j++){
                if(nums[i]+nums[j] == target){
                    result.push_back(i);                                     
                    result.push_back(j);
                }
            }
        }
        
        return result;
    }
};

// TC: O(N^2)
// SC: O(1)