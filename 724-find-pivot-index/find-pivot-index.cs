public class Solution {
    public int PivotIndex(int[] nums) {
        int n = nums.Length;
        int[] sumLeft = new int[n];
        int[] sumRight = new int[n];

        sumLeft[0] = 0;
        sumRight[n-1] = 0;
        for (int i = 1; i < n; i++){
            sumLeft[i] = sumLeft[i-1] + nums[i-1];
            sumRight[n-i-1] = sumRight[n-i] + nums[n-i];
        }
        for (int i = 0; i < n; i++){
            if (sumLeft[i] == sumRight[i]) return i;
        }
        return -1;
    }
}