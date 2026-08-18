class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> arr;
        for(int i =0; i <nums.size();i++){
            if(arr.count(target - nums[i])){
                return {arr[target - nums[i]], i};
            }
            arr[nums[i]] = i;
        }
        return {};
    }
};
