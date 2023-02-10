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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        
        queue<TreeNode*> Q;
        if(root) {
            Q.push(root);
        }
        while(!Q.empty()) {
            int size = Q.size();
            vector<int> v;
            while (size--) {
                TreeNode* temp = Q.front();
            v.push_back(temp -> val);
            // cout << temp -> val << " ";
            if(temp -> left) Q.push(temp -> left);
            if(temp -> right) Q.push(temp -> right);
            Q.pop();

            }
            ans.push_back(v);
            

        }
        

        return ans;
        
    }
};
