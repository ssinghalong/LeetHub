class Solution {
public:
    // int solve2(vector<int> &nums,int ind){
    //     //base
    //     if(ind>=nums.size()){
    //         return 0;
    //     }

    //     //iter
    //     int include = nums[ind]+solve2(nums,ind+2);
    //     int exclude = solve2(nums,ind+1);
    //     int ans = max(include,exclude);
    //     return ans;
    // }

    // int solve(vector<int> &nums,int ind,vector<int> &dp){
    //     if(ind>=nums.size()) return 0;
    //     if(dp[ind]!=-1) return dp[ind];

    //     dp[ind] = max(nums[ind]+solve(nums,ind+2,dp),solve(nums,ind+1,dp));
    //     return dp[ind];
    // }

    // int rob(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<int> dp(n+1,-1);
    //     int ans = solve(nums,0,dp);
    //     return ans;
    // }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        if(n==1) return nums[0];
        vector<int> dp(n+1,-1);
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp[n-1];
    }
};