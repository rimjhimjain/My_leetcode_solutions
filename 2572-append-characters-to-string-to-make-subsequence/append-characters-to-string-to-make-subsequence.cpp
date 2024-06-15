class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int j = 0;
        for(int i = 0;i < s.length();i++){
            if(t[j] == s[i]){
                j++;
            }
        }
        int count = 0;
        count = t.size()-j;

        return count;
    }
};