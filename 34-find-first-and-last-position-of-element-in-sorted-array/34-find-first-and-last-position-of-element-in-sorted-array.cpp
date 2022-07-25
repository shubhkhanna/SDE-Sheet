class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans{-1, -1};
        int low = 0;
        int high = size(nums)-1;
        
        // for finding first index
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid] == target){
                ans[0] = mid;
                high = mid-1;  // searching in left side to get first index
            } else if(nums[mid] < target){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        
        low = 0;
        high = size(nums)-1;
        
        // for finding last index
        while(low<=high){
            int mid = (low+high)/2;
            
            if(nums[mid] == target){
                ans[1] = mid;
                low = mid+1;   // searching in right side to get last index
            } else if(nums[mid] < target){
                low = mid+1;
            } else {
                high = mid-1;
            }
        }
        
        return ans;
    }
};

// TC: O(log n)
// SC: O(N)