class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result=n;
        for(int i=0; i < n; i++){
            result ^= nums[i] ^ i;
        }
        return result;
    }
};
