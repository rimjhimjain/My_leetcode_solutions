class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> res;
        sort(in.begin(),in.end());
        int n = in.size();

        for(int i = 0;i < n;i++){
            vector<int> ans = in[i];
            while(i < n && ans[1] >= in[i][0]){
                ans[1] = max(ans[1] , in[i][1]);
                i++;
            }
            if(i < n && ans != in[i]) i--;
            res.push_back(ans);
        }
        return res;
    }
};