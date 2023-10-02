class Solution {
public:
    bool winnerOfGame(string colors) {
        int A=0,B=0;
        string t;
        if(colors.size()<3) return false;
        for(int i=0;i<colors.size()-2;i++){
                t=colors.substr(i,3);
                if(t=="AAA")
                    A++;
                else if(t=="BBB"){
                    B++;
                }
            }
        if(A>B) 
            return true;
            return false;
        }
};