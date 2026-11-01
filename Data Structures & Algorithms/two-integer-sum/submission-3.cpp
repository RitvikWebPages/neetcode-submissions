class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> chara;
        for(int i=0;i<nums.size();i++){
            int remaining = target - nums[i];
            if(chara.count(remaining)){
                return {chara[remaining], i };
            }
            chara[nums[i]] = i;
        }
    }
};
