#User function Template for python3


#Function to count number of nodes in BST that lie in the given range.
class Solution:
    def getCount(self,root,low,high):
        ##Your code here
        def dfs(root):
            if root == None:
                return 0
            if root.data>=low:
                if root.data<=high:
                    return 1+dfs(root.left)+dfs(root.right)
                return dfs(root.left)
            else:
                return dfs(root.right)
            
        return dfs(root)
