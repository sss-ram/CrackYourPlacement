/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> rev(ListNode* head, int k){
        if(!head || !head->next)
            return {head,nullptr};
        ListNode* prev = nullptr, *t, *temp = head;
        int c = 0;
        while(temp){
            c++;
            temp = temp->next;
        }
        if(c<k)
            return {head};
        c = 0;
        temp = head;
        while(temp && c++<k){
            t = temp->next;
            temp->next = prev;
            prev = temp;
            temp = t; 
        }
        return {prev,temp};
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next)
            return head;

        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy, *temp = head, *t;
        while(temp && temp->next){ 
            vector<ListNode*> v= rev(temp,k);
            if(v.size()==1)
                break;
            prev->next = v[0];
            prev = temp;
            temp->next = v[1];
            temp = v[1];
        }
        return dummy->next;
    }
};