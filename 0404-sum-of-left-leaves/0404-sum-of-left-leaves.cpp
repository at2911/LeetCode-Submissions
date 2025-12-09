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
    bool isleaf(TreeNode* root){
        if (root==NULL)return 0;
       else if(root->left==NULL && root->right==NULL)return 1;
        return 0;
    }
    int sumleft(TreeNode* root){
    if(root==NULL)return 0;
    else if(root->left==NULL && root->right==NULL) return 0;
      if(isleaf(root->left))return root->left->val + sumleft(root->right);
      else return sumleft(root->left) + sumleft(root->right);


      
    }
    int sumOfLeftLeaves(TreeNode* root) {
     if(root->left==NULL && root->right==NULL) return 0;
    return sumleft(root);
    }
};