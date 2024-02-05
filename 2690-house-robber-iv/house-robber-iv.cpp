class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int n = nums.size();

        int left = 1,right= 1e9;

        while(left < right){
            int mid = left+(right-left)/2;
            int cnt =0;
            for(int i = 0;i < n;i++){
                if(nums[i] <= mid){
                    cnt++;
                    i++;
                }
            }
            if(cnt < k){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return left;
    }
};