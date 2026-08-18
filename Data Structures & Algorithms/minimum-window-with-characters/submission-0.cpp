class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> char_need;
        for(int i =0; i < t.length();i++){
            char_need[t[i]]++;
        }
        unordered_map<char, int> curr_window;
        int left =0;
        int minLeft = 0;
        int minLength = INT_MAX;
        int need = char_need.size();
        int have =0;
        for(int right =0; right < s.size();right++){
            curr_window[s[right]]++;
            if(char_need.count(s[right]) && char_need[s[right]] == curr_window[s[right]]){
                have++;
            }
            while(have == need){
                if(right-left+1 < minLength){
                    minLength = right-left+1;
                    minLeft = left;
                }
                curr_window[s[left]]--;
                if(char_need.count(s[left]) && char_need[s[left]] > curr_window[s[left]]){
                    have--;
                }
                left++;
            }
        }
        if(minLength == INT_MAX){
            return "";
        }else{
            return s.substr(minLeft, minLength);
        }



    }
};
