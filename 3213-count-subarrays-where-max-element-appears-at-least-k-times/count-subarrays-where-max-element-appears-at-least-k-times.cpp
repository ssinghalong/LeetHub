#define ll long long

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        ll ma=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(ma<nums[i]){
                ma=nums[i];
            }
        }
        ll l=0,res=0,maco=0;
        for(ll i=0;i<n;i++){
            if(nums[i]==ma){
                maco++;
            }
            while(maco>k || (l<i && maco==k && nums[l]!=ma)){
                if(nums[l]==ma){
                    maco--;
                }
                l++;
            }
            if(maco==k) res+=l+1;
        }
        return res;
    }
};