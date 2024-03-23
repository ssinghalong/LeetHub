public class Solution {
    public int MaxOperations(int[] nums, int k) {
        Array.Sort(nums);
        int l=0,r=nums.Length-1,count=0;
        while(l<r){
            if(nums[l]+nums[r]==k){
                l++;
                r--;
                count++;
            }
            else if(nums[l]+nums[r]>k){
                r--;
            }
            else{
                l++;
            }
        }
        return count;
    }
}