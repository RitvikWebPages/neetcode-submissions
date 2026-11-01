class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> maps;
        vector<vector<string>> ans;
        for(string&word : strs){
            string key = word;
            sort(key.begin(), key.end());
            maps[key].push_back(word);
        }
        for(auto &p: maps){
            ans.push_back(p.second);
        }
        return ans;
    }
};
