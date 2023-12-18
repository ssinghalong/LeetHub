class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int t=nums.size();
        sort(nums.begin(),nums.end());
        return nums[t-1]*nums[t-2]-nums[0]*nums[1];
    }
};