class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int i = 1;
        while(i < n-1){
            if(i > 0 && (nums[i-1]+nums[i+1]) == 2*nums[i]){
                swap(nums[i],nums[i+1]);
                i--;
            }else{
            i++;
            }
        }
        return nums;
    }
};