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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0|| head->next==nullptr)return head;
        int s=0;
        ListNode* copy=head;
        while(copy!=nullptr){
            copy=copy->next;
            s++;
        }
        k%=s;
        if(k==0)return head;
        k=s-k;
        
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        while(k--){
            dummy->next=head;
            dummy=head;
            head=head->next;
        }
        dummy->next=nullptr;
        copy=head;
        while(copy->next!=nullptr){
            copy=copy->next;
        }
        copy->next=temp->next;
        return head;

    }
};