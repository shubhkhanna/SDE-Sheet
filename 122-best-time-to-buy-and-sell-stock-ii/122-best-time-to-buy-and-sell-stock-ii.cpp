class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit = 0;
        
        for(int i=1;i<size(prices);i++){
            if(prices[i] > prices[i-1]){
                maxProfit += (prices[i] - prices[i-1]); 
            }
        }
     
        return maxProfit;
    }
};

// TC O(N)
// SC O(1)