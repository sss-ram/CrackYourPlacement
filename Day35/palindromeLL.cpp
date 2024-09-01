class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head->next)
            return true;
        if(!head->next->next){ 
            if(head->val!= head->next->val)
                return false;
            return true;
        }
        stack<ListNode *>st;
        ListNode* fp = head->next, *sp = head;
        while(fp && fp->next) {
            sp = sp->next;
            fp = fp->next->next;
        }
        int f = 0;
        if(fp)
            f = 1;
        fp = head;
        while(fp && fp != sp) {
            st.push(fp);
            fp = fp->next;
        }
        if(f == 1)
            st.push(fp);
        sp = sp->next;
        while(sp) {
            if(sp->val!= st.top()->val)
                return false;
            st.pop();
            sp = sp->next;
        }
        return true;
    }
};
