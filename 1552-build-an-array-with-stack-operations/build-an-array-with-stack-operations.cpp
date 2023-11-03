class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int pp=1,i=0;
        int end = target[target.size()-1];
        while(pp<=n){
            if(target[i]==pp){
                ans.push_back("Push");
                i++;
            }
            else{
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            if(pp==end) break;
            pp++;
        }
        return ans;
    }
};