class Solution {
public:
    void helper(TreeNode* root, vector<string>& res, string s) {
        if(!root)
            return;
        if(!root->left && !root->right) {
            s+=to_string(root->val);
            res.push_back(s);
            return;
        }
        s+= to_string(root->val)+"->";
        helper(root->left, res, s);
        helper(root->right, res, s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        helper(root, res, "");
        return res;
    }
};
