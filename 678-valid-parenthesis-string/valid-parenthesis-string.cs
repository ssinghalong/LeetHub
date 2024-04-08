public class Solution {
    public bool CheckValidString(string s) {
        int n = s.Length;
        int le=0,st=0;
        int rle=0,rst=0;
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
            if(s[n-1-i]==')'){
                rle++;
            }
            else if(s[n-1-i]=='*'){
                rst++;
            }
            else {
                if(rle>0) rle--;
                else if(rst>0) rst--;
                else return false;
            }
        }
        GC.Collect();
        return true;
    }
}