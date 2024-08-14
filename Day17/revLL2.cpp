class Solution {
public:
    ListNode* revll(ListNode* h, int pos){
        if(!h || !h->next || pos==0)
            return h;
        
        ListNode* t = h, *p = nullptr, *n;
        while(pos && t){
            n = t->next;
            t->next = p;
            p = t;
            t = n;
            pos--;
        }
        h->next = t;
        return p;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* t = head, *rr;
        if(left == 1){
            head = revll(t,right-left+1);
        }
        else{
            int lef = left-2;
            while(t && lef){
                lef--;
                t = t->next;
            }
            if(t){
                rr = t->next;
                t->next = nullptr;
            }
            t->next = revll(rr,right-left+1);
        }
        return head;
    }
};