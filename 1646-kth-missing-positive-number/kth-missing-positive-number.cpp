class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> missing;
        int n = arr.size();

        int count = 1;

        for(int i = 0;i < n;i++){
                while(count != arr[i]){
                missing.push_back(count);
                count++;
                }
                count++;
        }
        if(missing.size() != k){
            for(int i =0;i<k;i++){
                missing.push_back(count);
                count++;
            }
        }
        int ans = missing[k-1];

        return ans;
        
    }
};