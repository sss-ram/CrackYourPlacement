class Solution {
public:
    Node* copyRandomList(Node* head) {
        ios_base::sync_with_stdio(false); 
        cin.tie(nullptr);  
        
        if(!head)
            return nullptr;
        
        Node* nh;
        nh = new Node(head->val);
        unordered_map<Node*, Node*>m;
        Node* temp = head->next;
        m[head] = nh;
        Node* temp1 = nh;

        while(temp){
            Node* nn = new Node(temp->val);
            temp1->next = nn;
            temp1 = temp1->next;
            m[temp] = temp1;
            temp = temp->next;
        }
        
        temp = head;
        while(temp){
            m[temp]->random = m[temp->random];
            temp = temp->next;
        }
        return nh;
    }
};