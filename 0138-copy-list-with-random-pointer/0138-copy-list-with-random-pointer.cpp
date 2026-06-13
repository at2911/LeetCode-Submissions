/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* dummy= new Node(0);
        Node* temp=dummy;
        Node* copy=head;
        unordered_map<Node*,Node*>mp;
        while(copy!=nullptr){
            Node* a=new Node(copy->val);
            temp->next=a;
            temp=a;
            mp[copy]=temp;
            copy=copy->next;
        }
        mp[NULL]=NULL;
        copy=head;
        temp=dummy->next;
        while(copy!=NULL){
            temp->random=mp[copy->random];
            copy=copy->next;
            temp=temp->next;
        }
         return dummy->next;
    }
};