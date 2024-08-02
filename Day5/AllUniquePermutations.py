import itertools
class Solution:
    def uniquePerms(self, arr, n):
        return sorted(list(set(itertools.permutations(arr,n))))
        