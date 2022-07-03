class Solution {
private:
    void recurPermutations(int index,vector<int> &nums,vector<vector<int>> &ans){
        if(index == size(nums)){
            ans.push_back(nums);
            return;
        }
        
        for(int i=index;i<size(nums);i++){
            swap(nums[index],nums[i]);
            recurPermutations(index+1,nums,ans);
            swap(nums[index],nums[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recurPermutations(0,nums,ans);
        return ans;
    }
};

// TC: O(N)
// SC: O(N)