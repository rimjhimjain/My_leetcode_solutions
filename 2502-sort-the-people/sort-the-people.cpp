class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> copy(heights.begin(),heights.end());
        int n = heights.size();
        sort(copy.begin(),copy.end());
        vector<string> ans;

        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(copy[i] == heights[j]){
                    ans.insert(ans.begin(),names[j]);
                }
            }
        }
        return ans;
    }
};