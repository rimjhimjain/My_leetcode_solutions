class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n = wall.size();
        // total no of rows - frq;
        int maxi = 0;
        unordered_map<int,int> nmap;
        for(int i = 0;i < n;i++){
            int sum = 0;
            for(int j = 0;j < wall[i].size()-1;j++){
                sum += wall[i][j];
                nmap[sum]++;
                maxi = max(maxi,nmap[sum]);
            }
        }

        return n-maxi;
    }
};