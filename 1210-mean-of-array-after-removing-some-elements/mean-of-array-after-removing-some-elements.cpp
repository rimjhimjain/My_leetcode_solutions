class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();

        int p =( 5 * n)/100;
        double sum = 0;

        for(double i = p;i < n-p;i++){
            sum += arr[i];
        }

        sum /= (n - (p*2));

        return sum;
        
    }
};