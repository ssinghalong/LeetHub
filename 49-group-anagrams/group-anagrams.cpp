class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vv;
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string key = getkey(strs[i]);
            m[key].push_back(strs[i]);
        }

        for(auto i=m.begin();i!=m.end();i++){
            vv.push_back(i->second);
        }
        return vv;
    }

    string getkey(string a){
        vector<int> v(26);
        for(int i=0;i<a.size();i++){
            v[a[i]-'a']++;
        }
        string k="";
        for(int i=0;i<v.size();i++){
            k.append( to_string(v[i]) + '#');
        }
        return k;
    }
};