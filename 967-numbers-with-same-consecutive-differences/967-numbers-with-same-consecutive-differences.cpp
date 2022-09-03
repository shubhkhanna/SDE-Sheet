class Solution
{
    vector<int> ans;
    void sameNum(int &k, int n, int digit, int len)
    {
        if (len == 0)
        {
            ans.push_back(n);
            return ;
        }

        for (int i = 0; i < 10; i++)
        {
            if (abs(i - digit) == k)
            {
                sameNum(k, n*10 + i, i, len - 1);
            }
        }
    }

    public:
        vector<int> numsSameConsecDiff(int n, int k)
        {

            for (int i = 1; i <= 9; i++)
            {
                sameNum(k, i, i, n - 1);
            }
            return ans;
        }
};