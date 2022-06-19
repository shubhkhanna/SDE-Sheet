class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> freq(size(nums),0);
        
        for(int i=0;i<size(nums);i++){
            if(freq[nums[i]] == 1) return nums[i];
            else freq[nums[i]] = 1;
        }
        
        return -1;
    }
};