class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dup;
        for(int num = 0; num<nums.size();num++){
            if(dup.count(nums[num])){
                return true;
            }
            dup.insert(nums[num]);
        }
        return false;
        
    }
};