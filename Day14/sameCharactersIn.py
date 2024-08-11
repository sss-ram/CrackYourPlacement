'''Application of print all duplicate characters in gfg'''
class Solution:

    def sameChar(self, A, B):
        # code here
        a1 = A.lower()
        b1 = B.lower()
        c = 0
        for i in range(len(A)):
            if a1[i]==b1[i]:
                c+=1
        return c

