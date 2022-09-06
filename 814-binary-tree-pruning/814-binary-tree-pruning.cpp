/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    private:
        TreeNode* isPrune(TreeNode *root)
        {
            if (root == NULL) return NULL;

            root->left = isPrune(root->left);
            root->right = isPrune(root->right);

            if (root->val == 0 && root->left == NULL && root->right == NULL) return NULL;

            return root;
        }
    public:
        TreeNode* pruneTree(TreeNode *root)
        {
            return isPrune(root);
        }
};

// TC: O(N)
// SC: O(N)