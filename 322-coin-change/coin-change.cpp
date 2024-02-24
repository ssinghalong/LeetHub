class Solution {
public:
    int solve(vector<int> &coins,int amount,vector<int> &dp){
        //base
        if(amount==0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        //iter
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++){
            int toto = 0;
            if(amount-coins[i]>=0){
                toto = solve(coins,amount-coins[i],dp);
                if(toto==INT_MAX) continue;
                int temp = 1 + toto;
                mini = min(temp,mini);
            }
        }
        dp[amount]=mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        int ans = solve(coins,amount,dp);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};