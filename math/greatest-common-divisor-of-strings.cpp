class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.length(), n2 = str2.length();
        for (int i = min(n1, n2); i >= 1; --i) {
            if (n1 % i == 0 && n2 % i == 0) {
                string candidate = str1.substr(0, i);
                if (check(candidate, str1) && check(candidate, str2)) {
                    return candidate;
                }
            }
        }
        return "";
    }

private:
    bool check(string sub, string target) {
        string temp = "";
        int repeat = target.length() / sub.length();
        for (int i = 0; i < repeat; ++i) {
            temp += sub;
        }
        return temp == target;
    }
};