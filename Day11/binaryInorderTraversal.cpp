class Solution {
public:
    vector<int> sol;
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root){
        inorderTraversal(root->left);
        sol.push_back(root->val);
        inorderTraversal(root->right);
        }
        return sol;
    }
};