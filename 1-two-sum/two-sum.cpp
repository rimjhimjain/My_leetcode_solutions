class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> nmap;

        for(int i=0;i<nums.size() ;i++){

            int diff = target - nums[i];

            if( nmap.find(diff) != nmap.end() ){
                return {nmap[diff],i};
            }

            nmap[nums[i]] = i;
        }
        return nums;
    }
};