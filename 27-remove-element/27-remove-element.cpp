class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int i=0;
        
        for(int j=0;j<size(nums);j++){
            if(nums[j] != val){
                nums[i] = nums[j];
                i++;
            }
        }
        
        return i;
    }
};

// Two Pointer Approach
// TC O(N)
// SC O(1)