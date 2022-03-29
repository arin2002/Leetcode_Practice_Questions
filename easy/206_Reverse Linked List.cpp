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
        ListNode *p=head,*q=head;
        stack<int> s;
        while(p){
            s.push(p->val);
            p=p->next;
        }
        while(!s.empty()){
            q->val=s.top();
            s.pop();
            q=q->next;
        }
        return head;
    }
};
