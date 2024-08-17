class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* dummy = new ListNode(0);
        ListNode* temp, *temp1 = dummy;
        while(head && head->val < x){
            temp1->next = head;
            temp1 = temp1->next;
            head = head->next;
        }
        temp = head;
        while(temp && temp->next){
            if(temp->next->val < x){
                temp1->next = temp->next;
                temp1 = temp1->next;
                temp->next = temp->next->next;
            }
            else
                temp = temp->next;
        }
        temp1->next = head;
        return dummy->next;
    }
};