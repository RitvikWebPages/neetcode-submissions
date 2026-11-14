class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left =0;
        int right = heights.size()-1;
        int max =0;
        while(right > left){
            int current =0;
            if(heights[right] > heights[left]){
                current = (heights[left]) * (right - left);
                left++;
            }else{
                current = (heights[right]) * (right - left);
                right--;
            }
            if(current > max){
                max = current;
            }
        }
        return max;
    }
};
