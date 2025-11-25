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
    void preOrdTraversal(TreeNode* T){
        if(T!=NULL){
            ans.push_back(T->val);
            preOrdTraversal(T->left);
            preOrdTraversal(T->right);
        }

    }
    vector<int> preorderTraversal(TreeNode* root) {
        preOrdTraversal(root);
        return ans;
        
    }
};