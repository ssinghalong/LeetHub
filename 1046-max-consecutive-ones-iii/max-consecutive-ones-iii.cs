public class Solution {
    public int LongestOnes(int[] nums, int k) {
        int n = nums.Length;
        int l=0;
        int r=0;
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
        return r-l;
    }
}