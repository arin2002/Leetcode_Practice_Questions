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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p =head,*q=p;
        while(p)
        {
            ListNode * temp = p;
            if(p->val == val)
            {
                
                if(p==head)
                    head = head->next;
                else
                {
                    q->next = p->next;
                 }
                p = p->next;
                delete(temp);
                continue;
            }
            else
            {
                q = p;
                p =p->next;
            }
        }
        return head;
    }
};
