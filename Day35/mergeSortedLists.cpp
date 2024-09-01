class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1)
            return list2;
        if(!list2)
            return list1;

        ListNode* temp, *temp3;
        temp = new ListNode(0);
        temp3 = temp;
        ListNode* temp1 = list1, *temp2 = list2;
        while(temp1 && temp2) {
            while(temp1 && temp2 && temp1->val> temp2->val) {
                temp->next = temp2;
                temp2 = temp2->next;
                temp = temp->next;
            }
            while(temp1 && temp2 && temp1->val<= temp2->val) {
                temp->next = temp1;
                temp1 = temp1->next;
                temp = temp->next;
            }
        }
        if(temp1) {
            temp->next = temp1;
        }
        if(temp2) {
            temp->next = temp2;
        }
        return temp3->next;
    }
};
