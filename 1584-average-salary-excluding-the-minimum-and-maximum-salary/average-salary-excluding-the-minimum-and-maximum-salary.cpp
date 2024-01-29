class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());

        double sum = 0;
        double n = salary.size();

        for(int i = 1;i < n-1;i++){
            sum += salary[i];
        }

        double ans = sum/(n-2);

        return ans;


        
    }
};