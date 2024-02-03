class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> copy(heights.begin(),heights.end());
        sort(copy.begin(),copy.end());
        vector<string> ans;

        for(int i = 0;i < copy.size();i++){
            for(int j = 0;j < copy.size();j++){
                if(copy[i] == heights[j]){
                    ans.insert(ans.begin(),names[j]);
                }
            }
        }
        return ans;
    }
};