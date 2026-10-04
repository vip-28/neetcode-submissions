class Solution {
   public:
    bool isPalindrome(string s) {
        string clean;
        for (auto ch : s) {
            if (isalnum(ch)) {
                clean += tolower(ch);
            }
        }
        int i = 0;
        int j = clean.size() - 1;
        while (i <= j) {
            if (clean[i] == clean[j]) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
};
