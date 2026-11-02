class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> pq;
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i =0; i< nums.size();i++){
            freq[nums[i]]++;
        }
        for(auto& p: freq){
            pq.push({p.second, p.first});
        }
        for(int i =0;i<k;i++){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};
