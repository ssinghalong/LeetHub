public class Solution {
    public int Compress(char[] chars) {
        int n = chars.Length;
        String com = "";
        for(int i=0;i<n;i++){
            char t = chars[i];
            int count=1;
            while(i+1<n && chars[i+1]==t){
                count++;
                i+=1;
            }
            com+=t;
            if(count>1){
                com+=count.ToString();
            }
        }
        // chars = com.ToCharArray();
        Array.Copy(com.ToCharArray(),chars,com.Length);
        Array.Resize(ref chars,com.Length);
        return chars.Length;
    }
}