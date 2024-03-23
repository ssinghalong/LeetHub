public class Solution {
    public int LongestSubarray(int[] nums) {
        int l=0,r=0,k=1;
        int n = nums.Length;
        while(r<n){
            if(nums[r]==0){
                k--;
            }
            if(k<0){
                if(nums[l]==0){
                    k++;
                }
                l++;
            }
            r++;
        }
        GC.Collect();
        return r-l-1;
    }
}