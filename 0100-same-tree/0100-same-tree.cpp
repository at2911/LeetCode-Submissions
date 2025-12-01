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
    bool isSame(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL)return 1;
        else if((p==NULL && q!=NULL) || (q==NULL && p!=NULL))return 0;
        else return (p->val ==q->val) &&(isSame(p->left,q->left) && isSame(p->right,q->right));

        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
       return isSame(p,q);
    }
};