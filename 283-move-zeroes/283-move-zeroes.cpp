class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int i=0;
        
        for(int j=0;j<size(nums);j++){
            if(nums[j] != 0){
                nums[i] = nums[j];
                i++;
            }
        }
        
        while(i<size(nums)) nums[i++] = 0;
    }
};