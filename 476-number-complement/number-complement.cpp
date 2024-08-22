class Solution {
public:
    int findComplement(int n) {
        string binary = "";

        while(n > 0){
            binary = (n%2 == 0 ? "0" : "1") + binary;
            n /= 2;
        }

        long num = 0;
        long base = 1;

        for(int i = 0;i < binary.length();i++){
            if(binary[i] == '1'){
                binary[i] = '0';
            }else{
                binary[i] = '1';
            }
        }

        for(int i = binary.length()-1;i > -1;i--){
            if(binary[i] == '1'){
                num += base;
            }
            base *= 2;
        }
        return num;
    }
};