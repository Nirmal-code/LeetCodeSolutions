/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int carry=0;
        ListNode sum=new ListNode(0);
        ListNode dummy=sum;
        while (l1!=null || l2!=null || carry!=0){
            int l1_val=(l1!=null)? l1.val: 0;
            int l2_val=(l2!=null)? l2.val: 0;
            int current_val=l1_val+l2_val+carry;
            if (current_val>=10){
                dummy.next=new ListNode(current_val-10);
                dummy=dummy.next;
                carry=1;
            }else{
                dummy.next=new ListNode(current_val);
                dummy=dummy.next;
                carry=0;
            }
            if (l1!=null){
                l1=l1.next;
            }
            if (l2!=null){
                l2=l2.next;
            }
        }
        return sum.next;
    }
}