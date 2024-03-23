public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        double tt=0;
        for(int i=0;i<k;i++){
            tt+=nums[i];
        }
        double ma=tt/k;
        for(int i=k;i<nums.Length;i++){
            tt-=nums[i-k];
            tt+=nums[i];
            ma=Math.Max(ma,tt/k);
        }
        return ma;
    }
}