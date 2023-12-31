class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int l=0,r=0;
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j] && j-i>r-l){
                    r=j,l=i;
                }
            }
        }
        return r-l-1;
    }
};