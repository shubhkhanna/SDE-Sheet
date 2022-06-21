class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Two pointer approach
        int i = 0;
        for(int j=1;j<size(nums);j++){
            if(nums[i] != nums[j]){
                i++;
                nums[i] = nums[j];
            }
            cout << nums[i] << " " << j << endl;
        }
        
        return i+1;
    }
};