from typing import List


class Solution:
    def findPair(self, n : int, x : int, arr : List[int]) -> int:
        # code here
        d = set()
        for i in arr:
            if i-x in d or x+i in d:
                return 1
            d.add(i)
        return -1
