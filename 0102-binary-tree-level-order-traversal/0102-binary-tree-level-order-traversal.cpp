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
#include<deque>
class Solution {
public:
    deque<TreeNode*>levels;
    vector<vector<int>>ans;
    void order(deque<TreeNode*>levels){
        if(levels.empty())return;
        vector<int>temp;
        deque<TreeNode*>Next;
        for(int i=0;i<levels.size();i++){
            if(levels[i]==nullptr)continue;
            temp.push_back(levels[i]->val);
            Next.push_back(levels[i]->left);
            Next.push_back(levels[i]->right);
        }
        levels=Next;
        if(temp.empty())return;
        ans.push_back(temp);
        order(levels);

    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)return ans;
        levels.push_back(root);
        order(levels);
        return ans;
        
    }
};