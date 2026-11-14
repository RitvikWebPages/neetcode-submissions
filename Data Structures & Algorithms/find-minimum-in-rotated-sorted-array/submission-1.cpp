class Solution {
public:
    int findMin(vector<int> &nums) {
        int left =0;
        int right = nums.size()-1;
        int target = INT_MAX;
        while(right > left){
            int mid = (right+left)/2;
            if(nums[mid] > nums[right]){
                left = mid+1;
                if(target > nums[right]){
                    target = nums[right];
                }
            }else if(nums[mid] <= nums[right]){
                right = mid;
                if(target > nums[left]){
                    target = nums[left];
                }
            }

        }
        if(right == left){
            return nums[left];
        }
        return target;
    }
};
