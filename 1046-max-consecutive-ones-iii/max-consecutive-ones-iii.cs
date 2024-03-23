public class Solution {
    public int LongestOnes(int[] nums, int k) {
        int ma=0;
        int l=0;
        int r=0;
        int count=0;
        int n = nums.Length;
        while(r<n){
            while(r<n){
                if(nums[r]==0){
                    if(count==k) break;
                    count++;
                }
                r++;
            }
            ma=Math.Max(ma,r-l);
            while(l<n && nums[l]==1){
                l++;
            }
            if(l<n && nums[l]==0){
                count--;
                l++;
            }
        }
        GC.Collect();
        return ma;
    }
}