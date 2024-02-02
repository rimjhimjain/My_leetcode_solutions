class Solution {
public:
    bool isHappy(int n) {

        long squares = n;
        int count = 0;

        while(squares != 1 || squares < 1){
            
                squares = 0;
                while(n > 0){
                    int digit = n % 10;
                    n /= 10;
                    squares += digit * digit; 
                }
                // if(check == squares) count+=1;
                
                n = squares;
                if(count > 20) return false;
                count++;
            }

            if(n == 1){
                return true;
            }
        return false;
    }
};