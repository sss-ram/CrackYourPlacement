class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !(head->next))
            return head;
        ListNode* t= head;
        while(head && head->next){
            if(head->next->val == head->val)
                head->next = head->next->next;
            else
                head = head->next;
        }
        return t;
    }
};