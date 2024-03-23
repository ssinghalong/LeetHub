public class Solution {
    public int PivotIndex(int[] nums) {
        int su=0,temp=0;
        int n = nums.Length;
        for(int i=0;i<n;i++){
            su+=nums[i];
        }
        for(int i=0;i<n;i++){
            su-=nums[i];
            if(temp==su) return i;
            temp+=nums[i];
        }
        GC.Collect();
        return -1;
    }
}