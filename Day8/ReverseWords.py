class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split()
        rl = l[::-1]
        st = ""
        for i in range(len(rl)):
            st+= rl[i]
            if i==len(rl)-1:
                break
            st+=" "
        return st