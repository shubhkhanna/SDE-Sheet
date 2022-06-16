class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int start = 0;
        int end = size(nums)-1;
        int current = 0;
        
        // Three pointer approach
        while(current<=end){
            if(nums[current] == 2){
                swap(nums[end],nums[current]);
                end--;
            } else if(nums[current] == 0){
                swap(nums[start],nums[current]);
                start++;
                current++;
            } else {
                current++;
            }
        }
        
        
    }
};