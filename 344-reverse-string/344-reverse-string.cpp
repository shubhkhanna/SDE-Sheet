class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n = size(s);
        int last = n-1;
        
        for(int i=0;i<=last;i++){
            swap(s[i],s[last--]);
        }
        
    }
};

// TC: O(N)
// SC: O(1)