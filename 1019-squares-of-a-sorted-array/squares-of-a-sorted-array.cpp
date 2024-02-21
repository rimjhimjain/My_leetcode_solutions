class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0;i < n;i++){
            nums[i]*=nums[i];
        }
        
        // 16,1,0,9,100
        int left = 0;
        int right = n-1;
        int index = n-1;

        while(left <= right){
            if(nums[left] >= nums[right]){
                ans[index] = nums[left];
                left++;
            }else{
                ans[index] = nums[right];
                right--;
            }
            index--;
        }
        return ans;
    }
};