class Solution {
public:
    int solve2(vector<int> &nums,int ind){
        //base
        if(ind>=nums.size()){
            return 0;
        }

        //iter
        int include = nums[ind]+solve2(nums,ind+2);
        int exclude = solve2(nums,ind+1);
        int ans = max(include,exclude);
        return ans;
    }

    int solve(vector<int> &nums,int ind,vector<int> &dp){
        if(ind>=nums.size()) return 0;
        if(dp[ind]!=-1) return dp[ind];

        dp[ind] = max(nums[ind]+solve(nums,ind+2,dp),solve(nums,ind+1,dp));
        return dp[ind];
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        int ans = solve(nums,0,dp);
        return ans;
    }
};