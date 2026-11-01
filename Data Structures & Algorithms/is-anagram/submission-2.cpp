class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int> comp;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0;i < s.size();i++){
            comp[s[i]]++;
            comp[t[i]]--;
        }
        for(auto& p: comp){
            if(p.second != 0){
                return false;
            }
        }

    return true;
    }
};
