class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end(),greater<int>());
        sort(right.begin(),right.end());
        int l=0,r=0;
        if(left.size()!=0){
            l=left[0];
        }
        else{
            l=0;
        }
        if(right.size()!=0){
            r=right[0];
        }
        else{
            r=n;
        }
        cout<<n<<l<<r;
        return max(n-r,l);
    }
};