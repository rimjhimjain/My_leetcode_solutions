class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> map1(nums1.begin(),nums1.end());
        unordered_set<int> map2(nums2.begin(),nums2.end());
        int n = nums1.size();

        vector<vector<int>> ans;
        vector<int> first;
        for(const auto& i : map1){
            if(map2.find(i) == map2.end()){
                first.push_back(i);
            }
        }
        ans.push_back(first);
        first.clear();

        for(const auto& i : map2){
            if(map1.find(i) == map1.end()){
                first.push_back(i);
            }
        }
        ans.push_back(first);
        return ans;
    }
};