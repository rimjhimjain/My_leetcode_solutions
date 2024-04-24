class Solution {
public:
    double calculateTax(vector<vector<int>>& b, int income) {
        double tax = 0;
        if(income==0){
            return tax;
        }
        int prev = 0;
        for (int i = 0; i < b.size(); i++) {
            if(b[i][0] > income){
                b[i][0] = income;
            }
            int curr = b[i][0] - prev;
            tax += (curr * b[i][1]*1.0)/100.0;
            prev = b[i][0];
        }
        return tax;
    }
};