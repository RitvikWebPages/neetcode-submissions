class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right = heights.size()-1;
        int left =0;
        int max_area = 0;
        while(left < right){
            int diff = right-left;
            int smaller;
            if(heights[left] > heights[right]){
                smaller = heights[right];
            }else{
                smaller = heights[left];
            }
            int area = diff * smaller;
            max_area = max(max_area, area);
            if(heights[left] > heights[right]){
                right--;
            }else{
                left++;
            }
        }
        return max_area;
    }
};
