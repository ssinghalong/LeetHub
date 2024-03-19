class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        for(int i=0;i<chars.size();){
            char t = chars[i];
            int count=0;
            while(i<chars.size() && chars[i]==t){
                count++;
                i++;
            }
            ans.push_back(t);
            if(count==1){
                continue;
            }
            else{
                string u = to_string(count);
                for(int j=0;j<u.size();j++){
                    ans.push_back(u[j]);
                }
            }
        }
        chars = ans;
        return chars.size();
    }
};