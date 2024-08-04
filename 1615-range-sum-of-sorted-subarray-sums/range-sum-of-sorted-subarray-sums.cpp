class Solution {
public:
    int MOD = 1e9+7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> subarraySum;

        for (int start = 0; start < n; ++start) {
            int currentSum = 0;
            for (int end = start; end < n; ++end) {
                currentSum += nums[end];
                subarraySum.push_back(currentSum);
            }
        }

        sort(subarraySum.begin(),subarraySum.end());

        long sum = 0;
        for(int i =left-1;i < right;i++){
            sum += subarraySum[i];
        }
        return sum%MOD;
    }
};