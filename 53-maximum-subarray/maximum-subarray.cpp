class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0],summ=0;
        for(int i=0;i<nums.size();i++){
            if(summ<0) summ=0;
                summ+=nums[i];
            if(curr<summ) curr=summ;
        }
        return curr;
    }
};