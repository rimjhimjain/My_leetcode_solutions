class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        
        unordered_map<string,int> mp;
        vector<string> order;

        for(int i = 0;i < arr.size();i++){
            if(mp[arr[i]] == 0){
                order.push_back(arr[i]);
            }
            mp[arr[i]]+=1;
        }

        int count = 0;
        for(const auto& s : order){
            if(mp[s] == 1){
                count++;
                if(count == k) return s;
            }
        }

        return "";
    }
};