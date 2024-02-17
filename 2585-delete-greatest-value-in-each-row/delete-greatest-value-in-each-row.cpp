class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        for(auto& row : grid){
            sort(row.begin(),row.end());
        }
        int n = grid.size();//3
        int m = grid[0].size();//2
        int ans = 0;
            for(int i = 0;i < n;i++){
                sort(grid[i].begin(),grid[i].end());
            }

        for(int j = 0; j< m ;j++){
            int maxi = INT_MIN;
            for(int i = 0;i < n;i++){
                maxi = max(maxi,grid[i][j]);
            }
            cout << maxi<<" ";
            ans += maxi;
        }

        
        // int maxi = 0;
        // while(!pq.empty()){
        //     m = size;
        //     maxi = 0;
        //     while(m != 0){
        //         value = pq.top();
        //         pq.pop();
        //         maxi = max(maxi,value);
        //         m--;
        //     }
        //     cout << "maxi = "<<maxi <<endl;
        //     ans += maxi;
        // }
        // cout << "ans = "<<ans<<endl;
        return ans;
    }
};