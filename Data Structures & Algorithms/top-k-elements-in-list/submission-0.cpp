class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> arr;
        for(int i =0; i<nums.size();i++){
            arr[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        vector<int> result;
        for(pair<int, int> x : arr){
            minh.push({x.second, x.first});
            if (minh.size() > k) minh.pop();
        }
        
        while (!minh.empty()) {
            result.push_back(minh.top().second);
            minh.pop();
        }
        return result;
    }
};
