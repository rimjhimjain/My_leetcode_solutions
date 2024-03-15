class Solution {
public:
    bool areNumbersAscending(string s) {
        
        int n = s.length();
        vector<int> num;
        for(int i = 0;i < n;i++){
            if(isdigit(s[i])){
                string temp;

                while(i < n && isdigit(s[i])){
                    temp += s[i++];
                }
                num.push_back(stoi(temp));
            }
        }

        for(int i = 0;i < num.size()-1;i++){
            if(num[i] >= num[i+1]) return false;
        }
        return true;
    }
};