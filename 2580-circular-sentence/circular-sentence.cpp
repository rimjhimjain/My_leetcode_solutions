class Solution {
public:
    bool isCircularSentence(string sentence) {
        string s;
        stringstream ss(sentence);
        vector<string> words;
 
        while (getline(ss, s, ' ')) {
            words.push_back(s);
        }
        int size = words.size();

        char first = words[0][0];
        int lastword = words[size-1].size();
        char last = words[size-1][lastword-1];
        if(first != last ) return false;

        for(int i =0;i < size-1;i++){
            int n = words[i].size();
                if(words[i][n-1] != words[i+1][0]){
                    return false;
                }
            
        }

        return true;
    }
};