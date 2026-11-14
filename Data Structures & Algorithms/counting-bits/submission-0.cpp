class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = n; i >=0; i--){
            int temp = i;
            int counter = 0;
            while(temp!=0){
                counter += temp&1;
                temp = temp >>1;
            }
            ans.insert(ans.begin(),counter);
        }
        return ans;
    }
};
