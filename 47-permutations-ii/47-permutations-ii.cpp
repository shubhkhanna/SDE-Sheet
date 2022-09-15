class Solution {
private:
    void perm(int pos, vector<int> &nums, vector<vector<int>> &ans){
        if(pos >= nums.size()){
            ans.push_back(nums);
        }
        
        unordered_set<int> s;
        
        for(int i=pos;i<nums.size();i++){
            if(s.find(nums[i]) != s.end()) continue;
            
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            perm(pos+1,nums,ans);
            swap(nums[i],nums[pos]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        perm(0,nums,ans);
        return ans;
    }
};