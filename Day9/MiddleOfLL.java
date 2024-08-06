class Solution {
    public ListNode middleNode(ListNode head) {
        if(head.next == null)
            return head;
        ListNode f = head, s = head.next;
        while(s.next!=null && s.next.next!=null){
            f = f.next;
            s = s.next.next;
        }
        return f.next;
    }
}