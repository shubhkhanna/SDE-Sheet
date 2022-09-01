/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int countNodes(TreeNode *root, int maxValue){
        if(root == NULL) return 0;
        
        int count = 0;
        
        if(root->val >= maxValue){
            maxValue = root->val;
            count++;
        }
        
        return count + countNodes(root->left,maxValue) + countNodes(root->right,maxValue);
        
    }
    
    int goodNodes(TreeNode* root) {    
        return countNodes(root,root->val);                        
    }
};