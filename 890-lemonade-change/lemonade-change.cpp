class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        if(bills[0] == 10 || bills[0] == 20) return false;

        int bill5 = 0;
        int bill10 = 0;
        for(int b : bills){
            switch(b){
                case 5:
                    bill5++;
                    break;
                case 10:
                    if(bill5 == 0) return false;
                    bill5--;
                    bill10++;
                    break;
                case 20:
                    if(bill10 != 0){
                        bill10--;
                        bill5--;
                    } else{
                        bill5 -= 3;
                    }
                    if(bill5 < 0) return false;
                    break;
            }

        }
        return true;
    }
};