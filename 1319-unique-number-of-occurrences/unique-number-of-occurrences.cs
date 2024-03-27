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
        HashSet<int> hs = new (dic.Values);
        GC.Collect();
        return dic.Count==hs.Count;
    }
}