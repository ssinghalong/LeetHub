class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        int pref = 1;
        int suff = 1;
        for(int i=0;i<n;i++){
            pref*= nums[i];
            suff*=nums[n-i-1];
            maxi = max(pref,max(maxi,suff));
            if(nums[i]==0) pref = 1;
            if(nums[n-i-1]==0) suff=1;
        }
        return maxi;
    }
};