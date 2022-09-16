class Solution
{
    private:
        void sub(vector<int> &nums, int i, vector<int> &Subset, vector< vector< int>> &ans)
        {
            if (i == nums.size())
            {
                ans.push_back(Subset);
                return;
            }

            Subset.push_back(nums[i]);
            sub(nums, i + 1, Subset, ans);
            Subset.pop_back();

            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
            sub(nums, i + 1, Subset, ans);
        }
    public:
        vector<vector < int>> subsetsWithDup(vector<int> &nums)
        {
            vector<int> Subset;
            vector<vector < int>> ans;
            sort(nums.begin(),nums.end());
            sub(nums, 0, Subset, ans);
            return ans;
        }
};