class Solution
{
    public:
        int maximumDifference(vector<int> &nums)
        {
            int n = nums.size();

            int maxDiff = 0;
            int minDiff = INT_MAX;

            for (int i = 0; i < n; i++)
            {
                minDiff = min(minDiff, nums[i]);
                maxDiff = max(maxDiff, nums[i] - minDiff);
            }

            if (maxDiff == 0) return -1;

            return maxDiff;
        }
};

// TC: O(N)
// SC: O(1)