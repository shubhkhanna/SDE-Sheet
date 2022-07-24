class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = size(matrix);
        int col = size(matrix[0]);
        
        int start = 0;
        int end = (row*col)-1;
        
        while(start<=end){
            int mid = (start+(end-start)/2);
            
            if(matrix[mid/col][mid%col] == target) return true;
            else if(matrix[mid/col][mid%col] < target) start = mid+1;
            else  end = mid-1;
        }
        
        return false;
    }
};