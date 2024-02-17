class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {

        int m = grid.size();//2
        int n = grid[0].size();//3
        int ans =0;

        unordered_map<int, priority_queue<int>> mp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                mp[i].push(grid[i][j]);
            }
        }

        for(const auto& i : mp){
            cout << i.first<<" "<<endl;
        }

        for(int i = 0; i < n;i++){
            int maxval = -1;
            for(int j = 0;j < m;j++){
                int value = mp[j].top();
                mp[j].pop();
                maxval = max(maxval,value);
            }
            ans += maxval;
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