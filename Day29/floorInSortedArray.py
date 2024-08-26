class Solution:
    #User function Template for python3
    
    #Complete this function
    def findFloor(self,A,N,X):
        #Your code here
        f = 0
        l = N-1
        ans = 0
        if A[0]>X:
            return -1
        else:
            ans = 0
        while f<=l:
            m = (f+l)//2
            if A[m] == X:
                return m
            if A[m] < X:
                ans = max(ans, m)
                f = m+1
            else:
                l = m-1
        return ans
            
