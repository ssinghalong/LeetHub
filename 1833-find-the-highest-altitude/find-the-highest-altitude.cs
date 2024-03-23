public class Solution {
    public int LargestAltitude(int[] gain) {
        int ma=0,su=0;
        for(int i=0;i<gain.Length;i++){
            su+=gain[i];
            ma=Math.Max(ma,su);
        }
        GC.Collect();
        return ma;
    }
}