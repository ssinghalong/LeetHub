class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        int s = nums.size();
        int j=0,i;
        for(int i=0;i<s;i++){
            if(nums[i]==nums[j]){
                count++;
                if(count>s/2){
                    break;
                }
            }
            else{
                j=i;count=1;
            }
        }
        return nums[j];
    }
};