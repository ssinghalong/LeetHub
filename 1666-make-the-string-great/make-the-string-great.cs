public class Solution {
    public string MakeGood(string s) {
        var st = new Stack<char> ();
        for(int i=0;i<s.Length;i++){
            if(st.Count>0 && Math.Abs(st.Peek()-s[i])==32){
                st.Pop();
            }
            else{
                st.Push(s[i]);
            }
        }
        string ans = "";
        while(st.Count>0){
            ans=st.Peek()+ans;
            st.Pop();
        }
        GC.Collect();
        return ans;
    }
}