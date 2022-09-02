/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *  int val;
 *  TreeNode * left;
 *  TreeNode * right;
 *  TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> levelOrderBottom(TreeNode *root)
        {
            vector<vector < int>> ans;
            if (root == NULL) return ans;

            queue<TreeNode*> q;
            q.push(root);

            while (!q.empty())
            {
                int n = q.size();
                vector<int> nodes;

                for (int i = 0; i < n; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();

                    if (temp->left != NULL) q.push(temp->left);
                    if (temp->right != NULL) q.push(temp->right);
                    nodes.push_back(temp->val);
                }
                ans.push_back(nodes);
            }
            
             // reversing the ans vector
            reverse(ans.begin(),ans.end());
            
            return ans;
        }
};

// TC: O(N)
// SC: O(N)