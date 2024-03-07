class Solution {
public:
    bool wordPattern(string alpha, string s) {
        vector<string> words;
        string temp ="";
        int n = alpha.size();
        for(int i = 0;i < s.length();i++){
            if(s[i] == ' '){
                words.push_back(temp);
                temp = "";
            }else{
                temp += s[i];
            }
        }
        words.push_back(temp);

        if(n != words.size()) return false;

        unordered_map<char,string> hash;
        unordered_set<string> st;
        for(int i  = 0;i < n;i++){
            if(hash.find(alpha[i]) != hash.end()){
                if(hash[alpha[i]] != words[i]){
                    return false;
                }
            }else{
                if(st.count(words[i]) > 0) return false;

                hash[alpha[i]] = words[i];
                st.insert(words[i]);
            }
        }

        return true;

    }
};