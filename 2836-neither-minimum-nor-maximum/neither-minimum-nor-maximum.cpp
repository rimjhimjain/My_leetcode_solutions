class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return -1;

        sort(nums.begin(),nums.end());
        int a = nums[1];

        return a;
        
    }
};