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
    bool isPalindrome(ListNode* head) {
        vector<int>n;
        while(head!=nullptr){
            n.push_back(head->val);
            head=head->next;
        }
        vector<int>p=n;
        reverse(p.begin(),p.end());
        if(p==n)return 1;
        return 0;
    }
};