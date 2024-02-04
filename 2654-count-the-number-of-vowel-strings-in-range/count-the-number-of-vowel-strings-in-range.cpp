class Solution {
public:
    int vowelStrings(vector<string>& words, int start, int end) {
        int count = 0;

        int right =0;

        for(int i = start ;i < end+1;i++){
            right = words[i].size()-1;
            char first = words[i][0];
            char last = words[i][right];

            if(first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u'){
                if(last == 'a' || last == 'e' || last == 'i' || last == 'o' || last == 'u'){
                    count += 1;
                }
            }       
        }
        return count;
    }
};