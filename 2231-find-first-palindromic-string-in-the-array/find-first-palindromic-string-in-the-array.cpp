class Solution {
public:
    bool ispalin(string s){
        int n = s.size();
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-1-i]) return false;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            if(ispalin(words[i])) return words[i];
        }
        return "";
    }
};