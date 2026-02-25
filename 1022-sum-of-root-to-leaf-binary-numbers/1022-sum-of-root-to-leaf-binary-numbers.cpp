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
    
    int sumo(TreeNode* root,int s){
        
        if(root==NULL) return s;
        
        else{
            if(root->val==1){
                s=s*2+1;
            }
            else{
                s*=2;
            }
        }
        if(root->left==NULL && root->right==NULL)return s;
    
        int l=sumo(root->left,s);
        
        int r=sumo(root->right,s);
        
        return l+r;
        
        // return sumo(root->left,s)+sumo(root->right,s);
        
    }
    int sumRootToLeaf(TreeNode* root) {
        return sumo(root,0);
        return 0;
        
        
    }
};