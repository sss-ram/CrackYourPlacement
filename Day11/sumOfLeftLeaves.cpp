class Solution {
public:
    int sol(TreeNode* root, int sb){
        if(!root)
            return 0;
        if(!root->left && !root->right && sb == 1)
            return root->val;
        return sol(root->left,1) + sol(root->right, 0);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return sol(root,0);
    }
};