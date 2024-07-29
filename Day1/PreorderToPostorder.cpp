class Solution {
  public:
    // Function that constructs BST from its preorder traversal.
    Node* ins(Node* root, int d){
        if(!root)
            return newNode(d);
        if(root->data>d)
            root->left = ins(root->left,d);
        else
            root->right = ins(root->right,d);
        return root;
    }
    
    Node* Bst(int pre[], int size) {
        // code here
        if(size==1)
            return newNode(pre[0]);
        Node* root = newNode(pre[0]);
        for(int i=1; i<size; i++){
            root = ins(root,pre[i]);
        }
        return root;
    }
};