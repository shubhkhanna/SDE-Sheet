class Solution
{
    public:
        string reverseWords(string s)
        {
            int n = s.size();

            int left = 0;
            int right = n - 1;

            string temp = "";
            string ans = "";

            while (left <= right)
            {
                char ch = s[left];

                if (ch != ' ') temp += ch;
                else if (ch == ' ')
                {
                    reverse(temp.begin(), temp.end());
                    temp += " ";
                    ans += temp;
                    temp = "";
                }

                left++;
            }

            if (temp != "")
            {
                reverse(temp.begin(), temp.end());
                ans += temp;
            }

            return ans;
        }
};