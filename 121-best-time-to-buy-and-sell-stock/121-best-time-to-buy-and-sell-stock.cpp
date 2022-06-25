class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int maxProfit = 0;
        int minPrice = arr[0];
        
        for(int i=1;i<size(arr);i++){
            int curProfit = arr[i] - minPrice;
            maxProfit = max(maxProfit,curProfit);
            minPrice = min(minPrice,arr[i]);
        }
        
        // -6, 0, 1  i=1
        //  4, 4, 1  i=2
        //  2, 4, 1  i=3
        //  5, 5, 1  i=4
        // -1, 5, 1  i=5
        
        return maxProfit;
    }
};

// TC O(N)
// SC O(1)