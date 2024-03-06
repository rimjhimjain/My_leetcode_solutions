class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        for(int i  = 1;i < n;i++){
            left[i] = left[i-1]+nums[i-1];
        }
        for(int i = n-2;i > -1;i--){
            right[i] = right[i+1] + nums[i+1];
        }
        int i =0;
        for( i  = 0;i < n;i++){
            if(right[i] == left[i]){
                return i;
            }
        }
        return -1;
    }
};