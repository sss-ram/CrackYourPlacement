public class Solution {
    public boolean hasCycle(ListNode head) {
        if(head == null)
            return false;
        ListNode t1 = head, t2 = head.next;
        while(t2!=null && t2.next!=null){
            if(t1 == t2)
                return true;
            t1 = t1.next;
            t2 = t2.next.next;
        }
        return false;
    }
}