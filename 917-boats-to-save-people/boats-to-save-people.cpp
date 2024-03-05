class Solution {
public:
    int numRescueBoats(vector<int>& nums, int limit) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int count = 0;
        int i = 0, j = n - 1;

        while (i <= j) {
            int sum = nums[i] + nums[j];
            if (sum > limit) {
                j--;
                count++;
            } else {
                i++;
                j--;
                count++;
            }
        }
        return count;
    }
};