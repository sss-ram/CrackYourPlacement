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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !(head->next))
            return head;
        
        
        while(head && head->next){
            if(head->val == head->next->val){
                while(head->next && head->val == head->next->val){
                    head->next = head->next->next;
                }
                if(head->next)
                    head = head->next;
                else
                    return nullptr;
            }
            else
                break;
        }
        ListNode *t = head, *p=head;

        while(t && t->next){
            
            if(t->val == t->next->val){
                while(t->next && t->val == t->next->val){
                    t->next = t->next->next;
                }
                p->next = t->next;
                t = p;
            }
            p = t;
            t = t->next;
            
        }
        return head;
        
    }
};