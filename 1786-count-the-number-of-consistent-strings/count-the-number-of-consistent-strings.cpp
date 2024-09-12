class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

        int count = 0;
        unordered_map<char,int> nmap;

        for(int i = 0;i < allowed.size();i++){
            nmap[allowed[i]] = i;
        }

        for(int i = 0;i < words.size();i++){
            for(int j = 0;j < words[i].size();j++){
                if(nmap.find(words[i][j]) == nmap.end()){
                    count += 1;
                    break;
                }
            }
        }
        
        return words.size() - count;
    }
};