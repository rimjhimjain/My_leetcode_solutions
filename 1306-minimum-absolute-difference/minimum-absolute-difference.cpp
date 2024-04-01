class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        vector<vector<int>> res;
        int diff = INT_MAX;
        for(int i = 0;i < arr.size()-1;i++){
            diff = min(diff,abs(arr[i+1] - arr[i]));
        }

        for(int i = 0;i < arr.size()-1;i++){
            int temp = abs(arr[i+1] - arr[i]);
            if(temp == diff){
            vector<int> temp;
            temp.push_back(arr[i]);
            temp.push_back(arr[i+1]);
            res.push_back(temp);
            }
        }
        return res;
    }
};