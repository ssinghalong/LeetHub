class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> se;
        se.insert({0,0});
        pair<int,int> p = {0,0};
        bool flag=false;
        for(int i=0;i<path.size();i++){
            if(path[i]=='E'){
                p.first++;
            }
            else if(path[i]=='W'){
                p.first--;
            }
            else if(path[i]=='N'){
                p.second++;
            }
            else{
                p.second--;
            }
            cout<<p.first<<" "<<p.second<<endl;
            if(se.find(p)==se.end()){
                se.insert(p);
            }
            else{
                return true;
            }
        }
        return false;
    }
};