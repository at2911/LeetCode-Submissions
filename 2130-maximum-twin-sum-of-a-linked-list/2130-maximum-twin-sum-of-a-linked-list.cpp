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
    int pairSum(ListNode* head) {
        unordered_map<int,int>mp;
        int i=0;
        int ans=0;
        while(head!=nullptr){
            mp[i]=head->val;
            i++;
            head=head->next;
        }
        i--;
        for(int j=0;j<=i/2;j++){
            ans=max(ans,mp[j]+mp[i-j]);
        }
        return ans;
    }
};