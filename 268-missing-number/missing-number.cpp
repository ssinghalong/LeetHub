class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int miss=0;
        bool tt=false;
        for(int i=0;i<n;i++){
            miss^=i+1;
            miss^=nums[i];
            if(nums[i]==0) tt=true;
        }
        if(miss==0 && tt) return n;
        return miss;
    }
};