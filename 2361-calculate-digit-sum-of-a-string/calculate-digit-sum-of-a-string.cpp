class Solution {
public:
    vector<string> splitt(string s, int k) {
        vector<string> result;
        int len = s.length();
        int start = 0;

        while (start < len) {
            result.push_back(s.substr(start, k));
            start += k;
        }

        return result;
    }
    string sum(string s) {

        int add = 0;
        for (const char c : s) {
            if (isdigit(c)) {
                add += (c - '0');
            }
        }
        string output = to_string(add);
        return output;
    }
    string digitSum(string s, int k) {
        if(s.length() <= k) return s;

        string ans = "";
        while (s.size() > k) {
            ans = "";
            vector<string> arr = splitt(s, k);
            for (int i = 0; i < arr.size(); i++) {
                ans += sum(arr[i]);
            }
            s = ans;
        }
        return ans;
    }
};