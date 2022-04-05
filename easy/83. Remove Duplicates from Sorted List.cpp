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
