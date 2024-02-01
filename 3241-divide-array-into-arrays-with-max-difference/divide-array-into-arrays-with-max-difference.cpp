class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> vec;
        int n = nums.size();
        int start=0;
        int sum=0;
        for(int i=0;i<n;){
            vector<int> temp;
            start = nums[i];
            while(i<n && abs(nums[i]-start)<=k && temp.size()!=3){
                temp.push_back(nums[i]);
                sum++;
                i++;
                // cout<<i;
            }
            if(temp.size()<3) return {};
            vec.push_back(temp);
            if(i==n) break;
        }
        if(sum==n) return vec;
        return {};
    }
};