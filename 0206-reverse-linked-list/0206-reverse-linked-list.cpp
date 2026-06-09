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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)return head;
        else if(head->next==nullptr)return head;
        else{
            ListNode* copy=head->next;
            head->next=nullptr;
            ListNode* prev=head;
            head=copy; 
        while(head->next!=nullptr){
           copy=head->next;
           head->next=prev;
           prev=head;
           head=copy;
        }
        head->next=prev;
        }

        return head;
        
    }
};