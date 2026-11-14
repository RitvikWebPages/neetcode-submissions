class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i =0; i< nums.size();i++){
            int fixed_num = nums[i];
            if(fixed_num >0) break;
            if(i >= 1 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = nums.size()-1;
            while(right > left){
                if(nums[right] + nums[left] + fixed_num > 0){
                    right--;
                }
                else if(nums[right] + nums[left] + fixed_num < 0){
                    left++;
                }
                else{
                    ans.push_back({fixed_num, nums[right], nums[left]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                }
            }

        }
        return ans;
    }
};
