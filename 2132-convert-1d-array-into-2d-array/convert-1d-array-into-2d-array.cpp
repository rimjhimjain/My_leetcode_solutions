class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        vector<vector<int>> result(m,vector<int>(n,0));

        if(m*n < original.size() || m*n > original.size()) return {};

        int k = 0;
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                result[i][j] = original[k];
                k++;
                if(k == original.size()) break;
            }
        }
        return result;
    }
};