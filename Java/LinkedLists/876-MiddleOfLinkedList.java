class Solution {
    public ListNode middleNode(ListNode head) {
        ListNode middle, end;
        middle=head;
        end=head;

        while (end!=null && end.next!=null){
            end=end.next.next;
            middle=middle.next;
        }

        return middle;

        
    }
}