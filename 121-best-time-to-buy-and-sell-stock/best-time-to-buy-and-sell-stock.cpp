class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        if(n <= 1) return 0;

        int min_p = p[0];
        int profit = 0;
        for(int i = 0;i < n;i++){
            if(p[i] < min_p){
                min_p = p[i];
            }else{
                profit = max(profit , p[i] - min_p);
            }
        }
        return profit;
    }
};