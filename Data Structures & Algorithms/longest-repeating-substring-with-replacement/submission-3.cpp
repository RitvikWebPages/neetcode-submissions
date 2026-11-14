class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left =0;
        int longest = 0;
        for(int i =0; i < s.length();i++){
            count[s[i]]++;
            auto it = max_element(count.begin(), count.end(), [](auto &a, auto &b){return a.second < b.second;});
            int maxFreq = it->second;
            while(i-left+1 - maxFreq > k){
                count[s[left]]--;
                left++;
            }
            if(longest < i-left+1){
                longest = i-left+1;
            }
        }
        return longest;
    }
};
