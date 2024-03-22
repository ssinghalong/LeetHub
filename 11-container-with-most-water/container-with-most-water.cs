public class Solution {
    public int MaxArea(int[] height) {
        int l=0;
        int r=height.Length-1;
        int ma=0;
        while(l<r){  
            int water=Math.Min(height[l],height[r])*(r-l);
            Console.WriteLine(water);
            if(ma<water){
                ma=water;
                // Console.WriteLine(ma);
            }

            if(height[l]>height[r]){
                r--;
            }
            else{
                l++;
            }
        }
        return ma;
    }
}