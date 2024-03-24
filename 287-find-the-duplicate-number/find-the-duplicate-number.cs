public class Solution {
    public int FindDuplicate(int[] nums) {
        int slow = nums[0];
        int fast = nums[nums[0]];

        while(slow!=fast){
            fast=nums[nums[fast]];
            slow=nums[slow];
        }
        fast=0;
        while(slow!=fast){
            fast=nums[fast];
            slow=nums[slow];
        }
        GC.Collect();
        return slow;
    }
}