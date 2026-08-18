
class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> count;
        int left =0;
        int longest=0;
        for(int right = 0; right < s.length(); right++){
            count[s[right]]++;
            auto it = max_element(count.begin(), count.end(), [](const auto& a, const auto& b) { return a.second < b.second; });
            int maxFreq = it->second;
            while((right-left+1 - maxFreq) > k){
                count[s[left]]--;
                left++;
            }
            longest = max(longest, right-left+1);
        }
        return longest;
    }

};