class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string bs = "";
        ListNode* temp = head;
        while(temp){
            bs += to_string(temp->val);
            temp = temp->next;
        }
        return stoi(bs,nullptr,2);
    }
};