class Solution {
    public int[] twoSum(int[] nums, int target) {
        int arr[]=new int[2];
  
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[i]+nums[j]==target){
                    arr[0]=i;
                    arr[1]=j;
                }
            }
        }
        return arr;
    }
}   

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy=new ListNode(0);
        ListNode current=dummy;


    int carry=0;


            
            if(l2!=null){
                l2=l2.next;
            }
            current.next= new ListNode(sum%10);
            current=current.next;
            if(l1!=null){
                l1=l1.next;
            }

            

            int sum=x+y+carry;
            carry=sum/10;
            int x=(l1!=null)?l1.val:0;
            int y=(l2!=null)?l2.val:0;
    int carry=0;

        while(l1!=null || l2!=null){