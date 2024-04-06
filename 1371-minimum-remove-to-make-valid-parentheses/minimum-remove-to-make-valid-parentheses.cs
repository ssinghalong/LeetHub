public class Solution {
    public string MinRemoveToMakeValid(string s) {
        int count=0;
        var res = new StringBuilder();
        foreach(char c in s){
            if(c=='('){
                count++;
            }
            else if(c==')'){
                if(count==0) continue;
                count--;
            }
            res.Append(c);
        }
        var ans = new StringBuilder();
        for(int i=res.Length-1;i>=0;i--){
            Console.WriteLine(count);
            if(res[i]=='(' && count>0){
                count--;
                continue;
            }
            ans.Insert(0,res[i]);
        }
        GC.Collect();
        return ans.ToString();
    }
}