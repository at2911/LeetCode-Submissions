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
// #include <queue>
#include <deque>
class Solution {
public:
    vector<vector<int>>ans;
    
     deque<TreeNode*>lvl;

    void order(deque<TreeNode*>&lvl){
    // if(root==NULL)return;
    if(lvl.empty())return;
    deque<TreeNode*>Next;
    vector<int>copy;
   
    int s=lvl.size();
    for(int i=0;i<s;i++){
        if(lvl[i]==nullptr)continue;
        copy.push_back(lvl[i]->val);
        Next.push_back(lvl[i]->left);
        Next.push_back(lvl[i]->right);
        // lvl.pop_front();
        // lvl.pop_front();
    
    }
    lvl=Next;
    
    if(copy.empty())return;
    ans.push_back(copy);
    order(lvl);

    }
    // traversal(TreeNode* root){
    //     if(root==NULL)
    // }

    vector<vector<int>> levelOrder(TreeNode* root) {
        // TreeNode* p=root;
        if(root==NULL)return ans;
        // level.push_back(root);
        lvl.push_back(root);
        order(lvl);
        return ans;
  
       
       
       

        
    }
};