/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    public bool IsPalindrome(ListNode head) {
        ListNode slow=head,fast=head;
        Stack<int> st = new Stack<int> ();
        while(fast!=null && fast.next!=null){
            st.Push(slow.val);
            slow=slow.next;
            fast=fast.next.next;
        }
        if(fast!=null){
            slow=slow.next;
        }

        while(slow!=null && st.Peek()==slow.val){
            slow=slow.next;
            st.Pop();
        }
        return st.Count==0;
    }
}