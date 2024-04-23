class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        vector<vector<int>> output;
        map<int, int> map;
        for(auto item : items1){
            map[item[0]] += item[1];
        }
        for(auto item : items2){
            map[item[0]] += item[1];
        }
        for(auto item : map){
            output.push_back({item.first, item.second});
        }
        return output;
    }
};