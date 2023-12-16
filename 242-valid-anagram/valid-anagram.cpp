class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> um1;
        unordered_map<char,int> um2;
        
        for(int i=0;i<s.length();i++){
            um1[s[i]]++;
            um2[t[i]]++;
        }

        for(int i=0;i<um1.size();i++){
            if(um1[i]!=um2[i]) return false;
        }
        return true;
    }
};