class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n  = nums.size();
        // cout << n;
        long max = 0;
        
        while(n >= 3){
            max = nums[n-1];
            // cout << "max = "<<max <<endl;
            long sum = 0;
            for(int i = 0;i < n - 1;i++){
                sum += nums[i];
            }
            // cout << "sum = "<<sum<<endl;
            if(sum > max){
                sum += max;
                return sum;
            }else{
                n--;
            }
        }
        return -1;
    }
};