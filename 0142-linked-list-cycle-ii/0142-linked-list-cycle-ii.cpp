/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       ListNode* temp=head;
       unordered_map<ListNode*,int>mp;
       while(temp!=NULL){
        if(mp.count(temp))return temp;
        else mp[temp]++;
        temp=temp->next;
       }
       return temp;
    }
};