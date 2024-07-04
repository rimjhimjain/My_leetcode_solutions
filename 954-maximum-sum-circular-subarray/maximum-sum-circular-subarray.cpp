class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int currsum = 0;
        int mn = INT_MAX;
        int mx = INT_MIN;
        int n =  nums.size();

        for(int i = 0;i < n;i++){
            currsum += nums[i];
            mx = max(mx,currsum);
            if(currsum < 0) currsum = 0;
        }
        currsum = 0;
        for(int i = 0;i < n;i++){
            currsum += nums[i];
            mn = min(mn,currsum);
            if(currsum > 0) currsum =0;
        }
        int total_sum = 0;
        int neg_check = 0;
        for(int i = 0;i < n;i++){
            total_sum += nums[i];
            if(nums[i] < 0){
                neg_check++;
            }
        }
        if(neg_check == n){
            sort(nums.begin(),nums.end());
            return nums[n-1];
        }
        
        int c = total_sum - mn;
        return max(c,mx);
    }
};