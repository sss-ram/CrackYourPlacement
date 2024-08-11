class Solution:
    def simplifyPath(self, path: str) -> str:
        l = path.split("/")
        print(l)
        r = []
        for i in l:
            if i=="..":
                if r:
                    r.pop()
            elif i=="." or i=="": 
                continue
            else:
                r.append(i)
        s = ""
        for i in r:
            s+= "/"+i
        if s=="":
            return "/"
        return s