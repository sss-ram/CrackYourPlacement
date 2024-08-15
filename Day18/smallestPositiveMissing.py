class Solution:
    
    #Function to find the smallest positive number missing from the array.
    def missingNumber(self,arr,n):
        #Your code here
        for i in range(n):
            if arr[i] <= 0 or arr[i] > n:
                arr[i] = n+1
        for i in arr:
            if i == n+1 or i == -(n+1):
                continue
            arr[abs(i)-1] = -abs(arr[abs(i)-1])
        for i in range(n):
            if arr[i] > 0:
                return i+1
        return n+1
        