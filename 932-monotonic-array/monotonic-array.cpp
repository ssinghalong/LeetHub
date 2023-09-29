class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        bool p=true,q=true;
        for(int i=0;i<n-1 && p;i++){
            if(nums[i]<=nums[i+1]){
                p=true;
            }
            else{
                p=false;
            }
        }
        for(int i=0;i<n-1 && q;i++){
            if(nums[i]>=nums[i+1]){
                q=true;
            }
            else{
                q=false;
            }
        }
        return p||q;
    }
};