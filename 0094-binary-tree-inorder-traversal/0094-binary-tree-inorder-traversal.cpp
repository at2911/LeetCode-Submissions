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
    vector<int>ans;
    void ioTraversal(TreeNode * t){
        if(t!=NULL){
           ioTraversal(t->left);
           ans.push_back(t->val);
           ioTraversal(t->right);

        }

    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        ioTraversal(root);
        return ans;
        
    }
};