class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int ans = 0;
        for(int i =0;i < nums.size()-1;i++){
            for(int j = i+1;j < nums.size();j++){
                ans = max(nums[j]-nums[i], ans);
            }
        }
        if(ans <1) ans = -1;
        return ans;
    }
};