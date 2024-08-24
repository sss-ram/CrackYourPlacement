class Solution:
    def reorganizeString(self, s: str) -> str:
        o = ""
        l = []
        for i in s:
            if o=="" and l==[]:
                o+=i
                continue
            if l and o and l[-1]!=o[-1]:
                o+=l[-1]
                l.pop()
            if o and i!=o[-1]:
                o+=i
            else:
                l.append(i)
        while l:
            if l[-1]==o[-1]:
                if l[-1]!=o[0]:
                    o = l[-1]+o
                else:
                    f=0
                    for i in range(len(o)-2):
                        if o[i]!=l[-1] and o[i+1]!=l[-1]:
                            o = o[:i+1]+l[-1]+o[i+1:]
                            f=1
                            break
                    if not f:
                        return ""
            else:
                o+=l[-1]
            l.pop()
        return o
            
        
