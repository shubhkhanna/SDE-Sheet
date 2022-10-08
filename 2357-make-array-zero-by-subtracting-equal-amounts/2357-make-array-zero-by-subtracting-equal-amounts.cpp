class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();                    
       
        int count = 0;                
    
        for(int i = 0; i < n; i++){
            priority_queue<int,vector<int>,greater<int>> p;
            
            for(int i=0;i<n;i++) {
                if(nums[i] != 0) p.push(nums[i]);
            }
                                    
            if(!p.empty()) {
                count++;                
            } else {
                break;
            }
            
            int top = p.top();
            
            for(int j=0;j<n;j++){
                if(nums[j]!=0) {                
                   nums[j] -= top;             
                }    
            }
        }                
        return count;
    }
};