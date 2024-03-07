class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> nmap;

        for (int i = 0; i < nums.size(); i++) {
            if (nmap.find(nums[i]) != nmap.end()) {
                nmap[nums[i]] += 1;
            } else {
                nmap[nums[i]] = 1;
            }
        }
        
        vector<pair<int, int>> pairs(nmap.begin(), nmap.end());

        int maxi = 0;
        vector<int> ans;
        int p = pairs.size();
        for (const auto j : pairs) {
            if(p == k){
                ans.push_back(j.first);
            }
            maxi = max(j.second, maxi);
        }
        if(ans.size() == k) return ans;

        int i = 0;
        while(k > -1 && i < p){
            if(pairs[i].second == maxi){
                ans.push_back(pairs[i].first);
                k--;
            }
            if(k != 0 && i == p-1){
                i = 0;
                maxi--;
            }
            i++;
        }

        return ans;
    }
};