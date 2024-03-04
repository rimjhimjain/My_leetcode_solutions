class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s2t; // Map from s to t
        unordered_map<char, char> t2s; // Map from t to s
        
        for (int i = 0; i < s.size(); ++i) {
            char s_char = s[i];
            char t_char = t[i];
            
            if (s2t.find(s_char) == s2t.end()) {
                s2t[s_char] = t_char;
            } else if (s2t[s_char] != t_char) {
                return false;
            }
            
            if (t2s.find(t_char) == t2s.end()) {
                t2s[t_char] = s_char;
            } else if (t2s[t_char] != s_char) {
                return false;
            }
        }
        
        return true;
    }
};