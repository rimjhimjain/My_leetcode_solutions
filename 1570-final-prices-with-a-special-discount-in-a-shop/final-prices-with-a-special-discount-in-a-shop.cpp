class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] >= prices[i+1]) {
                prices[i] = prices[i] - prices[i+1];
            } else {
                int j = i+1;
                while (prices[i] < prices[j]) {
                    j++;
                    if(j == prices.size()){
                        break;
                    }
                    if(prices[i] >= prices[j]){
                        prices[i] = prices[i] - prices[j];
                        break;
                    }
                }
            }
        }
        return prices;
    }
};