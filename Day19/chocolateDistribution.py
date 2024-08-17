class Solution:

    def findMinDiff(self, A,N,M):

        # code here
        tot = 0
        A.sort()
        md = float('inf')
        if M == N:
            return max(A) - min(A)
        
        for i in range(N):
            if i < M-1:
                tot += A[i]
            else:
                tot += A[i]
                md = min(md, A[i] - A[i-M+1])
                tot -= A[i-M+1]
                
        return md