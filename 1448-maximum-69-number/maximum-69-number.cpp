class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int> digits;
        while(num > 0){
            int temp = num%10;
            digits.insert(digits.begin(),temp);
            num = num/10;
        }
        for(int i  = 0;i < digits.size();i++){
            if(digits[i] != 9){
                digits[i] = 9;
                break;
            }
        }

        string ans ;
        for(const auto& i:digits){
            ans += to_string(i);
        } 
        int res = stoi(ans);
        return res;
    }
};