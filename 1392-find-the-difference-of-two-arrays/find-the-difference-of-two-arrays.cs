public class Solution {
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2) {
        // IList<int> distinctNums1 = new List<int>();
        //     IList<int> distinctNums2 = new List<int>();
        //     foreach (int i in nums1)
        //     {
        //         if(Array.IndexOf(nums2, i) == -1 && !distinctNums1.Contains(i))
        //         {
        //             distinctNums1.Add(i);
        //         }
        //     }
        //     foreach (int i in nums2)
        //     {
        //         if (Array.IndexOf(nums1, i) == -1 && !distinctNums2.Contains(i))
        //         {
        //             distinctNums2.Add(i);
        //         }
        //     }
        //     var result = new IList<IList<int>>();
        //     result.Add(distinctNums1);
        //     result.Add(distinctNums2);
        //     return result;
        var dist1 = new List<int>();
        var dist2 = new List<int>();
        foreach(var i in nums1){
            if(Array.IndexOf(nums2,i)==-1 && !dist1.Contains(i)){
                dist1.Add(i);
            }
        }
        foreach(var i in nums2){
            if(Array.IndexOf(nums1,i)==-1 && !dist2.Contains(i)){
                dist2.Add(i);
            }
        }
        var result = new List<IList<int>>();
        result.Add(dist1);
        result.Add(dist2);
        GC.Collect();
        return result;
    }
}