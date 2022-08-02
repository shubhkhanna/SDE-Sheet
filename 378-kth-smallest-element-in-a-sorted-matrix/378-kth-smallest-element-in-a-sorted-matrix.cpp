class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> p;
        
        for(int i=0;i<size(matrix);i++){
            for(int j=0;j<size(matrix[0]);j++){
                p.push(matrix[i][j]);
                if(p.size() > k) p.pop();
            }
        }
        
        return p.top();
    }
};

// TC: O(N^2)