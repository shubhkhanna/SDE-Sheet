class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int size = m+n-1;
        int i = m - 1;
        int j = n - 1;
        
        while (j >= 0){
            if (i >= 0 && nums1[i] > nums2[j]){
                nums1[size] = nums1[i];
                size--;
                i--;
            }
            else{
                nums1[size] = nums2[j];
                size--;
                j--;
            }
        }
        
    }
};

// TC: O(n)
// SC: O(1)