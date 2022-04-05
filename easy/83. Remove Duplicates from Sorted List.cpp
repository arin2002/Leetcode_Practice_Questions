// Very Brute force not prefered
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        int i=0;
        map<int,int> m;
        ListNode *p= head,*q;
        
        while(p!=NULL){
            m.insert({p->val,i});
            i++;
            p=p->next;
        }
        p=NULL;q=NULL;
        for(auto i=m.begin();i!=m.end();++i){
            ListNode *t= new ListNode(i->first);
            if(q!=NULL){
                q->next=t;
                q=t;
            }
            if(p==NULL){
                p=t;
                q=t;
            }
        }
        return p;
    }
};

// bit optimized


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head ==NULL)
            return head;
        ListNode *p= head,*q=head->next;
        while(q!=NULL && p)
        {
            if(p->val==q->val){
                p->next=q->next;
                q=q->next;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
};
