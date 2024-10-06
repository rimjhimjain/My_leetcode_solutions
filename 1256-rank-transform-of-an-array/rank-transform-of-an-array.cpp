class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int> st(arr.begin(),arr.end());

        int rank = 1;
        unordered_map<int,int> mp;

        for(const auto &val : st){
            mp[val] = rank++;
        }
        for(auto &i :arr){
            i = mp[i];
        }
        
        return arr;
    }
};