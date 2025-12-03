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
    TreeNode* search(TreeNode* root, int key){
        while(root!=NULL){
        if(key==root->val)return root;
        else if(key<root->val) return search(root->left,key);
        else return search(root->right,key);
        }
        return NULL;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return search(root,val);
        
    }
};