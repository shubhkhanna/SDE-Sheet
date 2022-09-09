class Solution
{
    private:
        static bool comp(vector<int> &p1, vector<int> &p2)
        {
            if (p1[0] == p2[0]) return p1[1] > p2[1];
            else return p1[0] < p2[0];
        }
    public:
        int numberOfWeakCharacters(vector<vector < int>> &properties)
        {
            int n = properties.size();

            sort(properties.begin(), properties.end(), comp);	// sort the vector

            int ans = 0;

            int maxDef = INT_MIN;

            for (int i = n - 1; i >= 0; i--)
            {
                if (properties[i][1] > maxDef)
                {
                    maxDef = properties[i][1];
                }
                else if (properties[i][1] < maxDef)
                {
                    ans++;
                }
            }

            return ans;
        }
};