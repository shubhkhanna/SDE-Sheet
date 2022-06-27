class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int prod = 1;
        int msf = INT_MIN;
        
        for(int i=0;i<size(nums);i++){
            prod *= nums[i];
            
            if(prod > msf) msf = prod;
            if(prod == 0) prod = 1;
        }
        
        
        prod = 1;
        for(int i=size(nums)-1;i>=0;i--){
            prod *= nums[i];
            
            if(prod > msf) msf = prod;
            if(prod == 0) prod = 1;
        }
        
        return msf;
    }
};