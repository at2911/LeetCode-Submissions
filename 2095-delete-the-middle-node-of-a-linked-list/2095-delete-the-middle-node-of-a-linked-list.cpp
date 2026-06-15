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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr)return nullptr;
        int n=0;
        ListNode* copy=head;
        while(copy!=nullptr){
            copy=copy->next;
            n++;
        }
        cout<<n<<" ";
        copy=head;
        n=n/2;
        ListNode* temp=nullptr;
        while(n--){
            temp=head;
            head=head->next;
        }
        temp->next=head->next;
        return copy;

    }
};