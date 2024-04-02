class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0;i < n;i++){
            unordered_set<int> row;
            unordered_set<int> col;
            for(int j = 0;j < n;j++){
                if(row.find(matrix[i][j]) != row.end()) return false;

                row.insert(matrix[i][j]);

                if(col.find(matrix[j][i]) != col.end()) return false;

                col.insert(matrix[j][i]);
            }
        }
        return true;
    }
};