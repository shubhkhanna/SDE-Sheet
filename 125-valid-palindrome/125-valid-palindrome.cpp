class Solution
{
    private:
        bool isPalin(int l, int r, string &s)
        {
            if (l >= r) return true;

            if (s[l] != s[r]) return false;

            return isPalin(l + 1, r - 1, s);
        }

    public:
        bool isPalindrome(string s)
        {
            transform(s.begin(), s.end(), s.begin(), ::tolower);

            auto it = remove_if(s.begin(), s.end(), [](char
                const &c)
            {
                return !isalnum(c);
	});

            s.erase(it, s.end());

            return isPalin(0, s.size() - 1, s);
        }
};