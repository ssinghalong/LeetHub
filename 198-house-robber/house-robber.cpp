class Solution {
public:
    int call(vector<int> &nums,vector<int> &dp,int &n,int ind){
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int t = call(nums,dp,n,ind-1);
        int u = nums[ind]+call(nums,dp,n,ind-2);
        dp[ind] = max(t,u);
        return dp[ind];
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(n+1,-1);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        int ans = call(nums,dp,n,n-1);
        return ans;
    }
};