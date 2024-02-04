class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        int left = 0;
        int right = 0;
        string ans;

        for(int i = 0;i < words.size();i++){
            left = 0;
            right = words[i].size()-1;
            while(left < right){
                if(words[i][left] != words[i][right]){
                    break;
                }
                if(words[i][left] == words[i][right]){
                    left++;
                    right--;
                }  
            } 
                if(left >= right){
                    ans += (words[i]);
                    break;
                }
        }
        
        return ans;
    }
};