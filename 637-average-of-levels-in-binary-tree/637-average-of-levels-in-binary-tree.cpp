/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<double> averageOfLevels(TreeNode *root)
        {

            vector<double> ans;
            queue<TreeNode*> q;
            q.push(root);

            while(!q.empty())
            {
                double sum = 0, count = 0;

                int size = q.size();

                for (int i = 0; i < size; i++)
                {
                    TreeNode *temp = q.front();
                    q.pop();

                    count++;
                    sum += temp->val;

                    if (temp->left != NULL) q.push(temp->left);
                    if (temp->right != NULL) q.push(temp->right);
                }
                ans.push_back(sum/count);
            }
            return ans;            
        }
};

// TC: O(N)
// SC: O(N)