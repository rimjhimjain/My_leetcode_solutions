class Solution {
public:
    int pivotInteger(int n) {
        if(n== 1) return 1;
        int num = 2;
            int i = 0;
            int sum1 = 0;
            int sum = 0;
            int sum2 = 0;

            while(num < n+1){
                sum1 = 0;
                sum =0;
                    sum1 += num*(num+1)/2;
                    sum += n*(n+1)/2;
                    sum2 = (sum - sum1)+num;
                if(sum1 == sum2){
                    return num;
                }else{
                    num++;
                }
            }
            return -1;
    }
};