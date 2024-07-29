class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        res = []
        re = []
        ires = set()
        d1 ={}
        for i in nums:
            if i not in d1:
                d1[i] = 1
            else:
                d1[i] +=1
        for i in nums:
            if i!=0 and d1[i]>=2 and -2*i in d1:
                ires.add((i,i,-2*i))
        if len(ires)>0:
            re = list(ires)
        for i in re:
            res.append(list(i))
        c = 0
        for i in nums:
            if i == 0:
                c+=1
        if c>= 3:
            res.append([0,0,0])
        x = list(set(nums))
        d = {}
        for i in range(len(x)):
            d[x[i]] = i
        for i in range(len(x)-1):
            for j in range(i+1, len(x)):
                val = 0-(x[i]+x[j])
                if val in d and d[val]!= i and d[val]!=j and d[val]>j:
                    res.append([x[i],x[j],val])
        return res

        