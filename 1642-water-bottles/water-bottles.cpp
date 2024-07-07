class Solution {
public:
    int numWaterBottles(int bottles, int exchange) {
        
        int drink = bottles;
        while(bottles >= exchange){
            int full = 0;
            if(bottles%exchange != 0){
                full = bottles%exchange;
            }
            drink += bottles/exchange; // 3
            cout << drink ;
            bottles /= exchange; // b = 3
            bottles += full; // b = 3;
        }
        return drink;
    }
};