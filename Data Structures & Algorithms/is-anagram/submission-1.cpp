class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count_s;
        unordered_map<char, int> count_t;
        for(int i =0; i < s.length();i++){
            count_s[s[i]]++;
        }
        for(int i =0; i < t.length();i++){
            count_t[t[i]]++;
        }
        if(count_t == count_s){
            return true;
        }else{
            return false;
        }
    }
};
