/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    void POTraversal(TreeNode* t) {
        if (t != NULL) {
            POTraversal(t->left);

            POTraversal(t->right);
            ans.push_back(t->val);
        }
    }
    vector<int> postorderTraversal(TreeNode* root) {
        POTraversal(root);
        return ans;
    }
};