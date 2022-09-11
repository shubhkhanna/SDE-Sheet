class Solution
{
    public:
        double myPow(double x, int n)
        {

            if (n == 0) return 1.0;

            if (n < 0)
            {
                n = abs(n);
                x = 1 / x;
            }
            double temp = myPow(x, n / 2);
            if (n % 2 == 1) return temp *temp * x;
            return temp * temp;
        }
};

// TC: O(log2n)