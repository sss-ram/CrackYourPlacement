class Solution {
    public ListNode sortList(ListNode head) {
        ArrayList<Integer> a = new ArrayList<>();
        ListNode temp = new ListNode();
        temp = head;
        while(temp!= null){
            a.add(temp.val);
            temp=temp.next;
        }
        Collections.sort(a);
        temp = head;
        for(int i=0; i<a.size(); i++){
            temp.val = a.get(i);
            temp = temp.next;
        }
        return head;
    }
}