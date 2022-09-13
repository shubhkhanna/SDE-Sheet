class Solution
{
    private:
        void sub(vector<int> &nums, int i, vector<int> &Subset, vector< vector< int>> &ans)
        {

           	// base condition
            if (i == nums.size())
            {
                ans.push_back(Subset);
                return;
            }

            Subset.push_back(nums[i]);
            sub(nums, i + 1, Subset, ans);

            Subset.pop_back();	// removing ith element
            sub(nums, i + 1, Subset, ans);
        }
    public:
        vector<vector < int>> subsets(vector<int> &nums)
        {

            vector<int> Subset;
            vector<vector < int>> ans;
            sub(nums, 0, Subset, ans);
            return ans;
        }
};

// TC: O(2^n)
// SC: O(n)