class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> s1;
        unordered_map<string,int> s2;

        int count = 0;
        for (const string& word : words1) {
            s1[word]++;
        }

        for (const string& word : words2) {
           s2[word]++;
        } 

        for(const auto& i : s1){
            for(const auto& j : s2){
                if(i.first == j.first && i.second == 1 && j.second == 1){
                        count++;
                }
            }
        }
        return count;
    }
};