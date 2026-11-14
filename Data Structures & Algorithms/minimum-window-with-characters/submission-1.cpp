class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> char_need;
        for(int i =0; i <t.length();i++){
            char_need[t[i]]++;
        }
        unordered_map<char, int> curr_win;
        int need = char_need.size();
        int have=0;
        int bestStart = 0;
        int bestLength = INT_MAX;
        int left =0;
        for(int i =0; i < s.length();i++){
            curr_win[s[i]]++;
            if(char_need.count(s[i]) && char_need[s[i]] == curr_win[s[i]]){
                have++;
            }
            while(need == have){
                if(i-left+1 < bestLength){
                    bestStart = left;
                    bestLength = i-left+1;
                }
                curr_win[s[left]]--;
                if(char_need.count(s[left]) && char_need[s[left]] > curr_win[s[left]]){
                    have--;
                }
                left++;
            }

        }
        if(bestLength == INT_MAX){
            return "";
        }
        else{
            return s.substr(bestStart, bestLength);
        }
    }
};
