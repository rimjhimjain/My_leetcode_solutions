class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int freq = 1;
        for(int i = 1;i < n;i++){
            if(maxi == nums[i]){
                freq++;
            }else{
                freq--;
            }
            if(freq > n/2) return maxi;
            if(freq < 1){
                maxi = nums[i+1];
            }
        }
        return maxi;
    }
};