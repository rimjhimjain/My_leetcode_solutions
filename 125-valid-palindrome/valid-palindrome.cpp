class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        cout << left << " " << right << endl;

        while (left < right) {
            if (!isalnum(s[left])) {
                left += 1;
                continue;
            } else if (!isalnum(s[right])) {
                right -= 1;
                continue;
            } else if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left += 1;
            right -= 1;
        }

        return true;
    }
};
