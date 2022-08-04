class Solution
{
    private:
        string printSub(string s, int start, int end){
            string str;
            
            for(int i=start;i<=end;i++){
                str += s[i];
            }
            return str;
        }
    
        string palin(string s)
        {
            int n = s.size();
            int low, high;
            int start = 0, end = 1;

            for (int i = 1; i < n; i++)
            {
                low = i - 1;
                high = i;

                while (low >= 0 && high < n && s[low] == s[high])
                {
                    if (high - low + 1 > end)
                    {
                        start = low;
                        end = high - low + 1;
                    }

                    low--;
                    high++;
                }

                low = i - 1;
                high = i + 1;

                while (low >= 0 && high < n && s[low] == s[high])
                {
                    if (high - low + 1 > end)
                    {
                        start = low;
                        end = high - low + 1;
                    }

                    low--;
                    high++;
                }
            }
            
            string str = printSub(s,start,start+end-1);
            return str;
        }

    public:
        string longestPalindrome(string s) {
            return palin(s);
        }
};

// TC: O(N^2)
// SC: O(1)