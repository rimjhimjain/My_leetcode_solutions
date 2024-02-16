class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> nmap;

        for (const auto& i : arr) {
            if (nmap.find(i) == nmap.end()) {
                nmap[i] = 1;
            } else {
                nmap[i] += 1;
            }
        }

        int count = 0;
        vector<int> v;
        for(auto a:nmap){
            v.push_back(a.second);
        }
        sort(v.begin(),v.end());

        for(int i = 0;i < v.size();i++){
            if(k > v[i]){
                k -= v[i];
                v[i] = 0;
            }else{
                v[i] -= k;
                k = 0;
            }
            if(v[i] != 0){
                count++;
            }
        }
        return count;
    }
};