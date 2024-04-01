class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        sort(words.begin(),words.end());

        int count = 0;
        for(int i = 0;i < words.size();i++){
            if(pref[0] == words[i][0]){
                for(int j = 0;j < pref.size();j++){
                    if(pref[j] != words[i][j]){
                        break;
                    }
                    if(j == pref.size()-1) count++;
                }
            }
        }
        return count;
    }
};