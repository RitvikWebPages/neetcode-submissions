class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> arr;
        for(int i =0; i < strs.size(); i++){
            string k = strs[i];
            sort(k.begin(), k.end());
            arr[k].push_back(strs[i]);
        }
        for(pair<const string, vector<string>> word : arr){
            result.push_back(word.second);
        }
        return result;
    }
};
