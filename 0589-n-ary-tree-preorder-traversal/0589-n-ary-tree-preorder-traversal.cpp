/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;
    void PoT(Node* T){
        if(T!=NULL){
            int n=T->children.size();
            ans.push_back(T->val);
            for(int i=0;i<n;i++){
                PoT(T->children[i]);
            }
        }
    }
    vector<int> preorder(Node* root) {
        PoT(root);
        return ans;
    }
};