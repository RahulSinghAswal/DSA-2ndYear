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
    void preorderPushInVector(TreeNode* root, vector<int> &A){
        if(!root) {
            return;
        }
        A.push_back(root -> val);
        preorderPushInVector(root -> left, A);
        preorderPushInVector(root -> right, A);
          
        }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans ;
        preorderPushInVector(root , ans);
        return ans;
    
    }
};
