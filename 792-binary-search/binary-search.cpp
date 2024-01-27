class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n  = nums.size()-1;
        int first = 0;
        int mid = n/2;
        int last = n;

        while(nums[mid] != target){
            if(first > last){
                return -1;
            }
            if(nums[mid] < target){
                first = mid +1;
            }else{
                last = mid -1;
            }
            mid = (first+last) /2;
        }
        return mid;
    }
};