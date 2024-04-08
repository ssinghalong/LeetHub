public class Solution {
    public bool CheckValidString(string s) {
        int n = s.Length;
        int le=0,re=0,st=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                le++;
            }
            else if(s[i]=='*'){
                st++;
            }
            else {
                if(le>0) le--;
                else if(st>0) st--;
                else return false;
            }
        }
        le=0;re=0;st=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==')'){
                le++;
            }
            else if(s[i]=='*'){
                st++;
            }
            else {
                if(le>0) le--;
                else if(st>0) st--;
                else return false;
            }
        }
        GC.Collect();
        return true;
    }
}