class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size() != t.size()) return false;
        
        vector<int> ans(26,0);
        
        for(int i=0;i<s.size();i++){
            ans[s[i]-'a']++;
            ans[t[i]-'a']--;
        }
        
        for(auto x:ans){
            if (x) return false;
        }
        
        return true;
    }
};

// TC: O(N)
// SC: O(1)  taking ans vector of length 26