class Solution {
public:
    int fillCups(vector<int>& a) {
        int sum = 0;

        while(a[0] > 0 || a[1] > 0 || a[2] > 0){
            sort(a.begin(),a.end());
            sum++;
            a[1]--;
            a[2]--;
            cout << a[0] << " "<<a[1]<<" "<<a[2]<<endl;
        }
        return sum;
    }
};