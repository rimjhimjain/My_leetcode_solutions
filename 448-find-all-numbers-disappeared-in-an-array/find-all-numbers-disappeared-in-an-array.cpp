class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
       unordered_set<int> hs(nums.begin(),nums.end());
        vector<int> ans;
       for(int i  = 1;i < nums.size()+1;i++){
           if(hs.find(i) == hs.end()){
               ans.push_back(i);
           }
       } 
       return ans;
    }
};