public class Solution {
    public int LongestSubarray(int[] nums) {
        int l=0,r=0,n=nums.Length,ma=0;
        bool t=false;
        while(r<n){
            while(r<n){
                if(nums[r]==0){
                    if(t==true) break;
                    t=true;
                }
                r++;
            }
            ma=Math.Max(ma,r-l);
            while(l<n && nums[l]==1){
                l++;
            }
            if(l<n && nums[l]==0){
                t=false;
                l++;
            }
        }
        GC.Collect();
        return ma-1;
    }
}