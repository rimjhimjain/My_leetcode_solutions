class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int mini = INT_MAX;
        int n = nums.size();
        int ans = 0;

        for(int i = 0;i < n;i++){
            mini = min(abs(nums[i]),mini);
            if(mini == abs(nums[i])){
                if(nums[i] < 0 && ans != mini){
                    ans = nums[i];
                }else{
                    ans = mini;
                }
            }
        }
        return ans;
        
    }
};