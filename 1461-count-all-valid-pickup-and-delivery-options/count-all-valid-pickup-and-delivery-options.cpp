class Solution {
public:
    int MOD = 1e9+7;
    int countOrders(int n) {
        long long a = 2*n;
        vector<long long> vv(n,0);
        vv[0]=1;
        for(int i=1;i<n;i++){
            int temp = (2*(i+1)*(2*(i+1)-1)/2)%MOD;
            vv[i]=(vv[i-1]*temp)%MOD;
        }
        return (int)vv[n-1];
    }
};