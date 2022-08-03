class Solution
{
    public:
        string reverseWords(string s)
        {

            int n = s.length();
            int left = 0;
            int right = n - 1;

            string temp = "";
            string ans = "";

            while (left <= right)
            {

                char ch = s[left];

                if (ch != ' ')
                {
                    temp += ch;
                }
                else if (ch == ' ')
                {
                    if (temp != "") ans = temp + " " + ans;
                    temp = "";
                }
                left++;
            }

            
            // for adding last word
            if (temp != "") ans = temp + " " + ans;
            ans.pop_back();

            return ans;
        }
};

// TC: O(N)
// SC: O(1)