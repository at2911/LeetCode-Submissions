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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int>ans(2,-1);
        vector<int>ind;
        int cnt=2;
        int prev=head->val;
        head=head->next;
        while(head!=nullptr){
            if(head->next==nullptr)break;
            if(head->val>prev && head->val > head->next->val){
                ind.push_back(cnt);
            }
            else if(head->val <prev && head->val < head->next->val){
                ind.push_back(cnt);
            }
            cnt++;
            prev=head->val;
            head=head->next; 
        }
        if(ind.size()<2){
            return ans;
        }
        ans[1]=ind.back()-ind[0];
        ans[0]=INT_MAX;
        for(int i=1;i<ind.size();i++){
            ans[0]=min(ans[0],ind[i]-ind[i-1]);
        }
        return ans;
    }
};