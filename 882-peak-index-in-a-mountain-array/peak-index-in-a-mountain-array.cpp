class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = *max_element(arr.begin(),arr.end());

        for(int i = 0;i < arr.size();i++){
            if(arr[i] == max){
                max = i;
                break;
            }
        }
        return max;
    }
};