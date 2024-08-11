class Solution {
    public ListNode removeElements(ListNode head, int val) {
        if(head == null)
            return head;
        ListNode temp = head;
        while(temp != null && temp.val==val)
            temp = temp.next;
        head = temp;
        while(temp!=null){
            if(temp.next!=null && temp.next.val==val)
            while(temp.next!=null && temp.next.val==val)
                temp.next = temp.next.next;
            else
                temp = temp.next;
        }   

        return head;
    }
}