class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans(k);

        priority_queue<pair<int,int>> pq;
        int count = 0;

        for(int i = 0; i < m;i++){
            count = 0;
            for(int j = 0;j < n;j++){
                if(mat[i][j] == 1) count++;
            }
            pq.push({count,i});
            if(pq.size() > k) pq.pop();
        }
        
        
        while(pq.size()){
            ans[--k] = pq.top().second;
            pq.pop();
        }


        return ans;
    }
};