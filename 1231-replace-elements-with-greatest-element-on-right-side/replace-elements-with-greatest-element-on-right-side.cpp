class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxi = *max_element(arr.begin(),arr.end());

        for(int i = 0;i < arr.size()-1;i++){
            if(arr[i] == maxi){
                int n = i+1;
                maxi = *max_element(arr.begin()+n,arr.end());
            }
            arr[i] = maxi;
            cout << arr[i] << " ";
        }
        arr.pop_back();
        arr.push_back(-1);


        return arr;

    }
};