public class Solution {
    public int NumSubarrayProductLessThanK(int[] nums, int k) {
        GC.Collect();
        if(k<=1) return 0;
        int p=1,n=nums.Length,l=0,r=0,c=0;
        while(r<n){
            p*=nums[r];
            while(p>=k){
                p/=nums[l];
                l++;
            }
            c+=r-l+1;
            r++;
        }
        
        return c;
    }
}