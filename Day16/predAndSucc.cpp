class Solution
{
    public:
    Node* pred(Node* root){
        if(!root)
            return NULL;
        while(root->right)
            root = root->right;
        return root;
    }
    
    Node* succ(Node* root){
        if(!root)
            return NULL;
        while(root->left)
            root = root->left;
        return root;        
    }

    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        // Your code goes here
        if(!root)
            return;
        if (root->key == key) {
            if (root->left)
                pre = pred(root->left);

            if (root->right)
                suc = succ(root->right);
            return;
        }
        if(root->key > key) {
            suc = root;
            findPreSuc(root->left, pre, suc, key);
        }
        
        if(root->key < key) {
            pre = root;
            findPreSuc(root->right, pre, suc, key);
        }
    }
};