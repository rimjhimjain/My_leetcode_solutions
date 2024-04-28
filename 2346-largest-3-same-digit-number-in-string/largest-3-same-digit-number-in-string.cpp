class Solution {
public:
    std::string largestGoodInteger(string num) {
        string ans = ""; 
        int temp = 0; 
        bool check = true;

        for (int i = 0; i < num.length() - 2; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                temp = max(temp, num[i] - '0');
                check = false;
            }
        }
        if (check == false) {
            for (int i = 0; i < 3; i++) {
                ans += to_string(temp);
            }
            return ans;
        } 
        return "";
    }
};