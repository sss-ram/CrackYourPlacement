class Solution:
    def arraySortedOrNot(self, arr) -> bool:
        # code here
        pre = arr[0]
        for i in arr:
            if pre>i:
                return False
                
            pre = i
        return True
