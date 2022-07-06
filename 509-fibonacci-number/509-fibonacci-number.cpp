class Solution {
public:
    int fib(int n) {
        
        int f = 0;
        int f1 = 1;
        
        if(n==0) return 0;
        if(n==1 || n==2) return 1; 
        
        int ans = fib(n-1) + fib(n-2);
        return ans;
    }
};