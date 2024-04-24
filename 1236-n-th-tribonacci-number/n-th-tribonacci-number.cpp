class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        int sum = 0;
        int a = 0,b = 1,c = 1;
     
        for(int i = 2;i < n;i++){
            sum = a+b+c;
            a = b;
            b = c;
            c = sum;
        }

        return sum;
    }
};

