class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0;
        int win = 0;

        unordered_map<int,int> mp;

        for(int j =0;j < n;j++){
            mp[nums[j]]++;
            if(mp[nums[j]] > 1) return true;
            win++;
            if(win < k+1) continue;
            mp[nums[i]]--;
            i++;
        }
        return false;
    }
};