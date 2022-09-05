/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        queue<Node*> pq;
        
        if(root == NULL) return ans;
        
        pq.push(root);
        
        while(!pq.empty()){
            int n = pq.size();
            
            vector<int> level;
            
            for(int i=0;i<n;i++){
                Node *temp = pq.front();
                pq.pop();
                
                level.push_back(temp->val);
                for(auto child:temp->children) pq.push(child);
            }
            ans.push_back(level);
        }
        return ans;
    }
};

// TC: O(n)
// SC: O(n)