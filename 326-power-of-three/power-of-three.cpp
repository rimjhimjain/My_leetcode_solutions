class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 1) return true;
        if(n < 3) return false;

        while(n > 3){
            if(n%3 != 0) return false;
            n = n/3;
        }

        if(n ==3){
            return true;
        }
        return false;
    }
};