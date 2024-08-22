class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0] == 10 || bills[0] == 20) return false;

        int bill5 = 0;
        int bill10 = 0;
        for(int i = 0;i < bills.size();i++){
            if(bills[i] == 5){
                bill5++;
            }else if(bills[i] == 10){
                if(bill5 == 0) return false;
                bill5--;
                bill10++;
            }else{
                if(bill5 == 0) return false;
                if(bill10 != 0){
                    bill10--;
                    bill5--;
                }else{
                    bill5 -= 3;
                    if(bill5 < 0) return false;
                }
            }
        }
        return true;
    }
};