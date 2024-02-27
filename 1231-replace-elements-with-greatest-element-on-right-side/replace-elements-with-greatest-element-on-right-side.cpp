class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size()-1;
        int maxi = *max_element(arr.begin(),arr.end());

        for(int i = 0;i < n;i++){
            if(arr[i] == maxi){
                int n = i+1;
                maxi = *max_element(arr.begin()+n,arr.end());
            }
            arr[i] = maxi;
        }
        arr.pop_back();
        arr.push_back(-1);


        return arr;

    }
};