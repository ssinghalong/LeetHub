public class Solution {
    public bool UniqueOccurrences(int[] arr) {
        var dic = new Dictionary<int,int>();
        foreach(var i in arr){
            if(dic.ContainsKey(i)){
                dic[i]=dic[i]+1;
            }
            else{
                dic[i]=1;
            }
        }
        GC.Collect();
        var hs = new HashSet<int> ();
        foreach(var i in dic){
            if(hs.Contains(i.Value)){
                return false;
            }
            else{
                hs.Add(i.Value);
            }
        }
        return true;
    }
}