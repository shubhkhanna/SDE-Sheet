class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int res = 0;
        
        for(int i=0;i<size(nums);i++){
            res += nums[i];
            sum.push_back(res);
        }
        return sum;
    }
};