class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> maps;
        int longest = 0;
        int left = 0;
        int counter;
        for(int i =0; i < s.length();i++){
            maps[s[i]]++;
            while(maps[s[i]] > 1){
                maps[s[left]]--;
                left++;
            }
            int counter = i-left+1;
            if(counter > longest){
                longest = counter;
            }
        }
        return longest;
    }
};
