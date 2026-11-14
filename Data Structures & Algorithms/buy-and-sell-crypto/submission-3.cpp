class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int left = 0;
        int right =1;
        int current;
        while(right < prices.size()){
            if(prices[left] > prices[right]){
                left = right;
            }else{
                current = prices[right] - prices[left];
                if(current > max){
                    max = current;
                }
            }
            right++;
        }
        return max;
    }
};
