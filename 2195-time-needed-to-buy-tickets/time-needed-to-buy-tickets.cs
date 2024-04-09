public class Solution {
    public int TimeRequiredToBuy(int[] tickets, int k) {
        int y = tickets[k];
        int t=0;
        for(int i=0;i<tickets.Length;i++){
            if(tickets[i]<=y){
                t+=tickets[i];
            }
            else{
                t+=y;
            }
            if(i>k && tickets[i]>=y) t--;
        }
        GC.Collect();
        return t;
    }
}