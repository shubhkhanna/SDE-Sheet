class Solution
{
    public:
        bool searchMatrix(vector<vector < int>> &matrix, int target)
        {
            int row = size(matrix);
            int col = size(matrix[0]);

            int start = 0;
            int end = col - 1;

            while (start < row && end >= 0)
            {
                if (matrix[start][end] == target) return true;
                else if (matrix[start][end]  < target) start++;
                else end--;
            }

            return false;
        }
};

// TC: O(m+n)
// SC: O(1)