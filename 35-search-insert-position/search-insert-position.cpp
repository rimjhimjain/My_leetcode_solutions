class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();

        int left = 0;
        int right = n;
        int mid = n/2;

        if(target > nums[right-1]){
            return right;
        }

        while(left <= right){
            if(target == nums[mid]){
                return mid;
            }
            if(target < nums[mid]){
                right = mid-1;
            }else{
                left = mid+1;
            }
            mid = (right+left)/2;
        }
        return left;
    }
};