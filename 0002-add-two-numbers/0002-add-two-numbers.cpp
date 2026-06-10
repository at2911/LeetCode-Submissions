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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int sum=0,carry=0;
        while(l1!=nullptr && l2!=nullptr){
            sum=l1->val + l2->val +carry;
            l1=l1->next;
            l2=l2->next;
            carry=sum/10;
            sum=sum%10;
            ListNode* n=new ListNode(sum);
            temp->next=n;
            temp=n;
            sum=0;
        }
        while(l1!=nullptr){
            sum=l1->val+carry;
            l1=l1->next;
            carry=sum/10;
            sum=sum%10;
            ListNode* n=new ListNode(sum);
            temp->next=n;
            temp=n;
            sum=0;
            
        }
      while(l2!=nullptr){
            sum=l2->val+carry;
            l2=l2->next;
            carry=sum/10;
            sum=sum%10;
            ListNode* n=new ListNode(sum);
            temp->next=n;
            temp=n;
            sum=0;
            
        }
        if(carry){
            ListNode* n=new ListNode(carry);
            temp->next=n;
            temp=n;
        }
        return dummy->next;
    }
};