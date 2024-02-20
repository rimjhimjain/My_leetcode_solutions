class Solution {
public:
    int lengthOfLastWord(string s) {
        int  n = s.length();

        int point = n-1;
        while(point >= 0 && s[point] == ' ' ){
            point--;
        }
        int len =0;
        while(point >= 0 && s[point--] != ' ')len++;
    return len;
    }
};