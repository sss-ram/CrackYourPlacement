class Solution {
    public void reorderList(ListNode head) 
    {
        ListNode temp=new ListNode();
        ListNode prev=new ListNode();
        temp=head;
        int c=0;
        while(temp!=null)
        {
            ListNode n=new ListNode(temp.val);
            temp=temp.next;
            n.next=prev;
            prev=n;
            c++; 
        }
        temp=head;
        ListNode te=new ListNode();
        ListNode pe=new ListNode();
        int f=1;
        if(c%2==0)
        {
            f=0;
        }
        for(int i=0;i<c/2;i++)
        {
            te=temp.next;
            temp.next=prev;
            pe=prev.next;
            if(f==1 || i!=c/2-1){
                prev.next=te;
                prev=pe;
            }
            temp=te;

        }
        temp.next=null;

        prev.next=null;
    }
}