class Solution:
    def compute(self,head):
        #Your code here
        prev = []
        temp = head
        while temp:
            if temp.next and temp.data < temp.next.data:
                if prev:
                    prev[-1].next = temp.next
                    temp = prev[-1]
                    prev.pop()
                else:
                    head = head.next
                    temp = head
            else:
                prev.append(temp)
                temp = temp.next
        return head
