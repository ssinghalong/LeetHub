public class Solution {
    public bool CloseStrings(string w1, string w2) {
        if(w1==w2) return true;
        int n = w1.Length,m = w2.Length;
        if(n!=m) return false;
        var d1 = new Dictionary<char,int> ();
        var d2 = new Dictionary<char,int> ();
        for(int i=0;i<n;i++){
            if(d1.ContainsKey(w1[i])){
                d1[w1[i]]++;
            }
            else{
                d1[w1[i]]=1;
            }

            if(d2.ContainsKey(w2[i])){
                d2[w2[i]]++;
            }
            else{
                d2[w2[i]]=1;
            }
        }
        
        foreach(var t in d1.Keys){
            if(d2.ContainsKey(t)){
                if(d1[t]==d2[t]){
                    d1.Remove(t);
                    d2.Remove(t);
                }
            }
            else{
                return false;
            }
        }
        var d3 = new Dictionary<int,int> ();
        var d4 = new Dictionary<int,int> ();
        foreach(var t in d1.Values){
            if(d3.ContainsKey(t)){
                d3[t]++;
            }
            else{
                d3[t]=1;
            }
        }
        foreach(var t in d2.Values){
            if(d4.ContainsKey(t)){
                d4[t]++;
            }
            else{
                d4[t]=1;
            }
        }
        // foreach(var t in d3.Keys){
        //     if(d4.ContainsKey(t)){
        //         d4[t]--;
        //         if(d4[t]==0){
        //             d4.Remove(t);
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        //     else{
        //         return false;
        //     }
        // }
        if(!d3.OrderBy(kvp => kvp.Key).SequenceEqual(d4.OrderBy(kvp => kvp.Key))) return false;
        GC.Collect();
        return true;
    }
}