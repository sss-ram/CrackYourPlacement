class Solution {
public:
    int sizell(ListNode* h){
        if(!h)
            return 0;
        int c=0;
        ListNode* t=h;
        while(t){
            c++;
            t = t->next;
        }
        return c;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n = sizell(headA);
        int m = sizell(headB);
        int x = abs(n-m);
        if(n>m){
            while(x--)
                headA = headA->next;
            while(headA!=headB){
                headA = headA->next;
                headB = headB->next;
            }
            return headA;
        }
        while(x--)
            headB = headB->next;
        while(headA!=headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};