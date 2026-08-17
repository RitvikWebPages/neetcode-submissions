class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> ans;
        for(int n : nums){
            ans.insert(n);
        }
        int length = 0;
        int largest  =0;
        for(int s : ans){
            if(ans.find(s - 1) == ans.end()){
                length = 1;
                while(ans.find(s + length) != ans.end()){
                    length++;
                }
                if(length > largest) largest = length;
            }
        }
        return largest;
    }
};
