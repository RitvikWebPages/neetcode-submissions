class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i =0; i < rows; i++){
            for(int j = i+1; j < cols ;j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i =0; i <rows;i++){
            int left =0;
            int right = matrix[i].size()-1;
            while(right > left){
                int temp = matrix[i][left];
                matrix[i][left]=matrix[i][right];
                matrix[i][right] = temp;
                right--;
                left++;
            }
        }


    }
};
