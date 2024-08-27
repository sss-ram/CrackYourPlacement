# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        ans = float('-inf')
        def find(root):
            nonlocal ans
            if not root:
                return 0
            l = 1+find(root.left)
            r = 1+find(root.right)
            ans = max(ans, l+r-1)
            return max(l,r)
        find(root)
    
        return ans-1
