class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int konsa=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                konsa=i;
                break;
            }
        }
        if(konsa==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=nums.size()-1;i>konsa;i--){
            if(nums[i]>nums[konsa]){
                swap(nums[i],nums[konsa]);
                break;
            }
        }
        reverse(nums.begin()+konsa+1,nums.end());
    }
};