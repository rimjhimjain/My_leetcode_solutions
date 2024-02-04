class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int count = 0;
        int step =0;
        for(int i = 0;i < nums.size();i++){
            step += nums[i];
            if(step == 0){
                count++;
            }
        }
        
        return count;
    }
};