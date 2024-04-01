class Solution {
public:
    int lengthOfLastWord(string t) {
        
        int s = t.length();

        int n = s-1;
        int count  = 0;
        while(n >= 0 && t[n] == ' '){
            n--;
        }
        while(n >= 0 && t[n] != ' '){
            n--;
            count++;
        }
        return count;
    }
};