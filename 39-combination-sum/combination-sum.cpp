class Solution {
public:
    void call(vector<vector<int>> &finalans,int i,vector<int> &temp,vector<int> &candidates,int target){
        if (i==candidates.size()){
            if(target==0){
                finalans.push_back(temp);
            }
            return;
        }

        
        if(target>=candidates[i]){
            temp.push_back(candidates[i]);
            call(finalans,i,temp,candidates,target-candidates[i]);
            temp.pop_back();
        }        
        call(finalans,i+1,temp,candidates,target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> finalans;
        vector<int> temp;
        call(finalans,0,temp,candidates,target);
        return finalans;
    }
};