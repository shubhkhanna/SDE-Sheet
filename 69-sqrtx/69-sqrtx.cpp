class Solution {
public:
    int mySqrt(int x) {
        int ans = 1;
        
        if(x==0) return 0;
        
        while(ans<=x/ans) ans++;
        
        return ans-1;
    }
};