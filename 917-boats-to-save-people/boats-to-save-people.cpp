class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end(),greater<int>());
        int count=0;
        int i=0,j=people.size()-1;
        while(i<j){
            if(people[i]+people[j]<=limit){
                i++;
                j--;
                count++;
            }
            else{
                count++;
                i++;
            }
            cout<<i<<j<<" ";
            if(i==j){
                count++;
                break;
            }
        }
        return count;
    }
};