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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a=headA;
        while(headA!=NULL){
            headA->val=headA->val+INT_MIN;
            headA=headA->next;
        }
        while(headB!=NULL){
            if(headB->val<0){
              break;
            }
            headB=headB->next;
        }
        while(a!=NULL){
            a->val=a->val-INT_MIN;
            a=a->next;
        }
        return headB;
    }
};