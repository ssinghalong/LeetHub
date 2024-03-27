public class Solution {
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2) {
        // var ans = new List<IList<int>>();
        // HashSet<int> hs1 = new(nums1);
        // HashSet<int> hs2 = new(nums2);
        // List<int> temp1 = new();
        // foreach(int num in hs1)
        // {
        //     if(!hs2.Contains(num))
        //     {
        //         temp1.Add(num);
        //     }
        // }
        // ans.Add(temp1);
        // temp1 = new();
        // foreach(int num in hs2)
        // {
        //     if(!hs1.Contains(num))
        //     {
        //         temp1.Add(num);
        //     }
        // }
        // ans.Add(temp1);
        // return ans;
        var ans = new List<IList<int>> ();
        HashSet<int> hs1 = new (nums1);
        HashSet<int> hs2 = new (nums2);
        var temp1 = new List<int>();
        
        foreach(var i in hs1){
            if(!hs2.Contains(i)){
                temp1.Add(i);
            }
        }
        ans.Add(temp1);
        temp1 = new();
        foreach(var i in hs2){
            if(!hs1.Contains(i)){
                temp1.Add(i);
            }
        }
        ans.Add(temp1);
        GC.Collect();
        return ans;
    }
}