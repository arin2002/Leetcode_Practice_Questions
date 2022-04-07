class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* p=head ,*q=head->next;
        
        while(q){
            swap(p->val,q->val);
            if(q->next==NULL)
                break;
            p=p->next->next;
            q=q->next->next;
        }
        return head;
    }
};
