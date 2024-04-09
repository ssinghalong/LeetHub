public class Solution {
    public int TimeRequiredToBuy(int[] tickets, int k) {
        int t=0;
        while(tickets[k]!=0){
            for(int i=0;i<tickets.Length;i++){
                if(tickets[i]!=0){
                    tickets[i]=tickets[i]-1;
                    t++;
                }
                if(tickets[k]==0){
                    break;
                }
            }
        }
        GC.Collect();
        return t;
    }
}