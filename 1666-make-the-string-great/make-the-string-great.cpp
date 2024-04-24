class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0;i < s.length();i++){
            if(!st.empty() && (isupper(st.top()) && islower(s[i]) && tolower(st.top()) == s[i]|| islower(st.top()) && isupper(s[i]) && tolower(s[i]) == st.top())){
                st.pop();
            }else{
                st.push(s[i]);
            }
        } 

        string ans = "";
        while(!st.empty()){
            ans+= st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        return ans;
    }
};