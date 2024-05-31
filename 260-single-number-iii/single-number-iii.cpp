class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> st;
        for(int num:nums){
            if(st.find(num) == st.end()){
                st.insert(num);
            } else{
                st.erase(num);
            }
        }
        return vector<int> (st.begin(),st.end());
    }
};