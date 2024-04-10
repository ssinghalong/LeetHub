public class Solution {
    public int[] DeckRevealedIncreasing(int[] deck) {
        int n = deck.Length;
        int [] tt = new int[n];
        for(int i=0;i<n;i++){
            tt[i]=-1;
        }
        Array.Sort(deck);
        bool flag=true;
        int count=0;
        while(count!=n){
            for(int i=0;i<n;i++){
                if(flag && tt[i]==-1){
                    flag = false;
                    tt[i] = deck [count];
                    count++;
                }
                else if(tt[i]==-1){
                    flag=true;
                }
                if(count==n) break;
            }
        }
        GC.Collect();
        return tt;
    }
}