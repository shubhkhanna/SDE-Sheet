class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n = size(nums);
        int fp,sp;
        
        for(fp=n-2;fp>=0;fp--){
            if(nums[fp] < nums[fp+1]) break;
        }
        
        if(fp<0) reverse(nums.begin(),nums.end());
        else {
            for(sp=n-1;sp>fp;sp--){
                if(nums[sp] > nums[fp]) break;
            }
            swap(nums[fp],nums[sp]);
            reverse(nums.begin()+fp+1,nums.end());
        }
    }
};