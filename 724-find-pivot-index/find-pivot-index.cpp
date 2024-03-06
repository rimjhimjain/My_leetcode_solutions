class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        ios_base::sync_with_stdio( 0 );
    std::cin.tie( 0 );
        int n = nums.size();
        int mid = 0;
        int leftsum = 0,rightsum = 0;
        while(mid < n){
            leftsum = 0;
            rightsum = 0;
            for(int i = 0;i < mid;i++){
                leftsum += nums[i];
            }
            for(int i = mid+1;i < n;i++){
                rightsum += nums[i];
            }
            if(leftsum == rightsum){
                return mid;
            }
            mid++;
        }
        
        return -1;
    }
};