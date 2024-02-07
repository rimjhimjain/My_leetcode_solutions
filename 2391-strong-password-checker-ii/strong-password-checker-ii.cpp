class Solution {
public:
    bool strongPasswordCheckerII(string password) {
       if(password.length() < 8) return false;
       int n = password.length();
       for(int i = 0;i < n-1;i++){
           if(password[i] == password[i+1]) return false;
       }
       bool digit = false;
       bool lower = false;
       bool upper = false;
       bool special = false;

       for(int i = 0 ; i < n;i++){
           if(isdigit(password[i])) digit = true;
           if(isalpha(password[i]) && isupper(password[i])) upper = true; 
           if(isalpha(password[i]) && islower(password[i])) lower = true; 
           if(!iswalnum(password[i])) special = true;
       } 

       if(digit == true && upper == true && lower == true && special == true) return true;
        return false;
    }
};