class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int t) {
        if(!head->next)
            return nullptr;
        ListNode* temp = head;
        int c=0;
        while(temp){
            c++;
            temp = temp->next;
        }
        temp = head;
        c = c-t;
        if(c==0){
            head=head->next;
            return head;
        }
        while(temp && c-->1){
            temp = temp->next;
        }
        if(temp->next->next)
            temp->next = temp->next->next;
        else
            temp->next = nullptr;
        return head;


    }
};