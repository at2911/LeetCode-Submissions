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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while(1){
         ListNode* end=prev;

            for(int i=0;i<k && end!=NULL;i++){
                end=end->next;
            }
            if(end==NULL)break;
            ListNode* start=prev->next;
            ListNode* next=end->next;
            ListNode* curr=start;
            ListNode* back=next;
            ListNode* copy=NULL;

            while(curr!=next){
                copy=curr->next;
                curr->next=back;
                back=curr;
                curr=copy;
            }
            prev->next=end;
            prev=start;
        }
        return dummy->next;
    }
};