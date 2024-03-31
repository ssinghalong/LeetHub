class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> us;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size()-1;i++){
            int j=0,k=i,l=nums.size()-1;
            while(j<k && l>k){
                if((nums[j]+nums[k]+nums[l])==0){
                    us.insert({nums[j],nums[k],nums[l]});
                    j++;
                    l--;
                }
                else if(nums[j]+nums[k]+nums[l]>0){
                    l--;
                }
                else{
                    j++;
                }
            }
        }
        vector<vector<int>> ans;
        for(auto it:us){
            ans.push_back(it);
        }
        return ans;
    }
};