class Solution {
public:
    bool validMountainArray(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;
        if(nums[0] > nums[1]) return false;
        if(nums[n-1] > nums[n-2]) return false;

        int increment = nums[0];
        int inlast = nums[n-1];
        
        for(int i = 0;i < n-1;i++){
            if(nums[i] == nums[i+1]) return false;
            if(nums[i] < nums[i+1]){
                increment = nums[i+1];
            }else{
                break;
            }
        }

        for(int i = n-1;i > -1;i--){
            if(nums[i] == nums[i-1]) return false;
            if(nums[i] < nums[i-1]){
                inlast = nums[i-1];
            }else{
                break;
            }
        }
        if(inlast == increment ) return true;

        return false;
    }
};