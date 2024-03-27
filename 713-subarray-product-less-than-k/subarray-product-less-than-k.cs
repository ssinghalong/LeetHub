public class Solution {
    public int NumSubarrayProductLessThanK(int[] nums, int k) {
        if(k<=1) return 0;
        int prod=1;
        int n=nums.Length;
        int l=0,r=0;
        int count=0;
        while(r<n){
            prod*=nums[r];
            while(prod>=k){
                prod/=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;
        }
        GC.Collect();
        return count;
    }
}