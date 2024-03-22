public class Solution {
    public void MoveZeroes(int[] nums) {
        int n = nums.Length;
        int change = 0;
        int original = 0;
        
        while (change < n && nums[change] != 0) {
            change++;
        }
        
        original = change + 1;
        
        while (original < n) {
            while (original < n && nums[original] == 0) {
                original++;
            }
            
            if (original < n) { // Check if original is still within bounds
                nums[change] = nums[change] + nums[original];
                nums[original] = nums[change] - nums[original];
                nums[change] = nums[change] - nums[original];
                change++;
                original++;
            }
        }
    }
}
