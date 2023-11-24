class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int sum=0;
        int n = piles.size()/3;
        sort(piles.begin(),piles.end(),greater<int>());
        for(int i=1;i<2*n;i+=2){
            sum+=piles[i];
        }
        return sum;
    }
};