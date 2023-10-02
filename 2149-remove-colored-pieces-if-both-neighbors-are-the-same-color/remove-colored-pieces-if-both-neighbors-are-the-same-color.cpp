class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3) return false;
        int ac=0,bc=0;
        for(int i=0;i<colors.size()-2;i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A')
                ac++;
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B')
                bc++;
        }
        return ac>bc;
    }
};