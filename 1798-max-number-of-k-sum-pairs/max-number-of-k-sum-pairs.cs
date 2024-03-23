public class Solution {
    public int MaxOperations(int[] nums, int k) {
        var ht = new Hashtable();
        int count=0;
        for(int i=0;i<nums.Length;i++){
            if(ht.ContainsKey(k-nums[i])){
                count++;
                ht[k-nums[i]]=(int)ht[k-nums[i]]-1;
                if((int)ht[k-nums[i]]==0){
                    ht.Remove(k-nums[i]);
                }
            }
            else{
                if(ht.ContainsKey(nums[i])){
                    ht[nums[i]]=(int)ht[nums[i]]+1;
                }
                else{
                    ht.Add(nums[i],1);
                }
            }
        }
        return count;
    }
}