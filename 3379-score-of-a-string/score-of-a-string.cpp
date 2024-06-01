class Solution {
public:
    int scoreOfString(string s) {
        
        int sum = 0;

        for(int i = 0;i < s.length()-1;i++){
            int n1 = s[i];
            int n2 = s[i+1];
            sum += abs(n2-n1);
        }
      
        return sum;
    }
};