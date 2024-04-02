class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int j = 0;
        for(int i = 0;i < t.length();i++){
            if(j == s.length()) break;
            if(s[j] == t[i]){
                j++;
            }
        }
        if(j != s.length()) return false;
        return true;
    }
};