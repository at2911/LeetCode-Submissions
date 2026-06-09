/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int c=0;
        if(head==NULL)return head;
        else c++;
        ListNode* copy=head;
        while(copy->next!=NULL){
            copy=copy->next;
            c++;
        }
        c/=2;
        while(c--){
            head=head->next;
        }
        return head;

    }
};