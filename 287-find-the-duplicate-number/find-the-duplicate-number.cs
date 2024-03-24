public class Solution {
    public int FindDuplicate(int[] nums) {
        var hs = new HashSet<int> ();
        GC.Collect();
        for(int i=0;i<nums.Length;i++){
            if(hs.Contains(nums[i])){
                return nums[i];
            }
            hs.Add(nums[i]);
        }
        return -1;
    }
}