public class Solution {
    public int MaxArea(int[] height) {
        int l=0;
        int r=height.Length-1;
        int ma=0;
        while(l<r){  
            ma=Math.Max(ma,Math.Min(height[l],height[r])*(r-l));
            if(height[l]>height[r])r--;
            else l++;
        }
        return ma;
    }
}