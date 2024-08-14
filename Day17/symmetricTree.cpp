class Solution {
public: 
    bool helper(TreeNode* n1, TreeNode* n2) {
        if(!n1 && !n2)
            return true;
        if(!n1 && n2)
            return false;
        if(n1 && !n2)
            return false;
        if(n1->val != n2->val)
            return false;
        return helper(n1->left, n2->right) && helper(n1->right, n2->left); 
    }
    bool isSymmetric(TreeNode* root) {
        if(!root->left && !root->right)
            return true;
        if(!root->left && root->right)
            return false;
        if(!root->right && root->left)
            return false;
        return helper(root->left, root->right); 
    }
};