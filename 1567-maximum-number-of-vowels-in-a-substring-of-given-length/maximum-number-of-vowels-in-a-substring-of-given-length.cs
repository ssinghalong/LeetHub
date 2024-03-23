public class Solution {
    public int MaxVowels(string s, int k) {
        int ma=0,count=0;
        for(int i=0;i<k;i++){
            if(isVow(s[i]))
                count++;
        }
        ma=count;
        for(int i=k;i<s.Length;i++){
            if(isVow(s[i-k])){
                count--;
            }
            if(isVow(s[i])){
                count++;
            }
            ma=Math.Max(count,ma);
        }
        return ma;
    }
    public bool isVow(char a){
        if( a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
            return true;
        return false;
    }
}