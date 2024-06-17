class Solution {
public:
    bool judgeSquareSum(int c) {
        
        for(int i = 2;i * i <= c;i++){
            if(c%i == 0){
                int expocount = 0;
                while(c%i == 0){
                    expocount++;
                    c /= i;
                }
                if(i%4 == 3 && expocount %2 != 0) return false;
            }
        }
        return c%4 != 3;
    }
};