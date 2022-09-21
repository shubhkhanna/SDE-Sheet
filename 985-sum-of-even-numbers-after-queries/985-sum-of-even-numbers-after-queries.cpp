class Solution
{
    public:
        vector<int> sumEvenAfterQueries(vector<int> &nums, vector<vector< int>> &queries)
        {
            vector<int> ans;

            int sum = 0;

            for (int it: nums)
            {
                if (!(it & 1)) sum += it;
            }

            for (auto it: queries)
            {
                int num = it[0];
                int index = it[1];

                if (!(nums[index] &1)) sum -= nums[index];

                nums[index] += num;

                if (!(nums[index] &1)) sum += nums[index];

                ans.push_back(sum);
            }

            return ans;
        }
};