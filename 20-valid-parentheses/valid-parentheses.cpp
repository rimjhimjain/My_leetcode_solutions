class Solution {
public:
    bool isValid(string s) {
        if(s.empty()) return true;
        if(s.size()%2 != 0) return false;

        vector <char> arr;

        for(int i = 0; i < s.length();i++){
            
            if(arr.empty()){ 
                arr.push_back(s[i]);
            }else if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                arr.push_back(s[i]);
            }else if(s[i] == ')' && arr.back() == '('){
                arr.pop_back();
            }else if(s[i] == ']' && arr.back() == '['){
                arr.pop_back();
            }else if(s[i] == '}' && arr.back() == '{'){
                arr.pop_back();
            }
            else{
                return false;
            }
        }
        for (int i =0;i<arr.size();i++){
            cout << arr[i] << endl;
        }
        if(arr.empty()){
            return true;
        }
        return false;


    }
};