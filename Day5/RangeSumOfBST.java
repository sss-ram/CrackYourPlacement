/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int solve(TreeNode root, int low, int high, int s){
        if(root == null)
            return s;
        if(root.val<low)
            return solve(root.right,low,high,s);
        if(root.val>high)
            return solve(root.left,low,high,s);
        return solve(root.left,low,high,s+root.val) + solve(root.right,low,high,0);
    }
    public int rangeSumBST(TreeNode root, int low, int high) {
        return solve(root,low,high,0);
    }
}