class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        sort(nums.begin(),nums.end());

        int count = 0;
        int maxi = 0;
        int ans =0 ;

        for(int i = 0;i < n-1;i++){
            if(nums[i] == nums[i+1]){
                count += 1;
            }else{
                count = 0;
            }
            maxi = max(count , maxi);
            if(maxi == count){
                ans = nums[i];
            }
        }
        return ans;
        
    }
};