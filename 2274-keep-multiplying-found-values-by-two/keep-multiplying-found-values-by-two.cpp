class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(),nums.end());
        unordered_set<int> search(nums.begin(),nums.end());

        while(original <= nums[nums.size()-1]){
            if(search.find(original) != search.end()){
                original *= 2;
            }else{
                break;
            }
        }
        return original;
    }
};