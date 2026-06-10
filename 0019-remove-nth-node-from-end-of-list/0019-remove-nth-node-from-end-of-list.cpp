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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* copy=head;
        while(head!=nullptr){
            head=head->next;
            c++;
        }
        c=c-n;
        head=copy;
        if(c==0)return head->next;
        ListNode* prev=nullptr;
        while(c--){
            prev=head;
            head=head->next;
        }
        
         prev->next=head->next;

        return copy;
    }
};