class Solution {
public:
    void reverseString(vector<char>& s) {

        int j = s.size()-1;
        int n = s.size();

        for(int i = 0;i < n/2;i++){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                j--;
        }

        // return s;
    }
};