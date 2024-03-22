public class Solution {
    public bool IsSubsequence(string s, string t) {
        int n = s.Length,m=t.Length;
        if(n>m) return false;
        if(n==m && s!=t) return false;
        int i=0,j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        return i==n;
    }
}