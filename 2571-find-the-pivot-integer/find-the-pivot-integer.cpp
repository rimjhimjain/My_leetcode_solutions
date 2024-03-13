class Solution {
public:
    int pivotInteger(int n) {
        if(n== 1) return 1;
        int num = 2;
            int i = 0;
            int sum1 = 0;
            int sum2 = 0;

            while(num < n+1){
                sum1 = 0;
                sum2 = 0;
                for(i = 1;i < num+1;i++){
                    sum1 += i;
                }
                for(i = num;i < n+1;i++){
                    sum2 += i;
                }
                cout << sum1 << " "<<sum2 <<" "<<num<<endl;
                if(sum1 == sum2){
                    return num;
                }else{
                    num++;
                }
            }
            return -1;
    }
};