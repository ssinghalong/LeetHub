class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if(k>=arr.size()){
            sort(arr.begin(),arr.end(),greater<int>());
            return arr[0];
        }
        queue<int> q;
        for(int i=1;i<arr.size();i++){
            q.push(arr[i]);
        }
        int prev = arr[0];
        int win=0;
        while(win<k){
            if(prev>q.front()){
                win++;
                q.push(q.front());
                q.pop();
            }
            else{
                q.push(prev);
                prev=q.front();
                q.pop();
                win=1;
            }
        }

        return prev;
    }
};