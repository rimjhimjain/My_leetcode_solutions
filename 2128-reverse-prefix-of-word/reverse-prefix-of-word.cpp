class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        string temp = "";
        bool check = false;

        for(int i = 0;i < word.length();i++){
            temp += word[i];
            if(word[i] == ch){
                check = true;
                break;
            }
        }
        if(check == false) return word;
        int j = 0;
        for(int i = temp.length()-1;i > -1;i--){
            cout << word[j] <<" "<<temp[i] <<endl;
            word[j] = temp[i];
            j++;
        }

        return word;

    }
};