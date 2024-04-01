class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> s1;
        unordered_map<string, int> s2;

        int count = 0;
        for (const auto& word : words1) {
            s1[word]++;
        }

        for (const auto& word : words2) {
            s2[word]++;
        }

        for (const auto& pair : s1) {
            if (pair.second == 1 && s2.find(pair.first) != s2.end() &&
                s2[pair.first] == 1) {
                count++;
            }
        }
        return count;
    }
};