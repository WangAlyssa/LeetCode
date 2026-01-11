class Solution {
public:
    string reverseWords(string s) {
        string new_s = "";
        int right = s.length() - 1;

        while (right >= 0) {
            while (right >= 0 && s[right] == ' ') {
                right--;
            }
            
            if (right < 0){
                break;
            }

            int left = right;
            while (left >= 0 && s[left] != ' ') {
                left--;
            }

            string word = s.substr(left + 1, right - left);

            if (new_s.length() == 0) {
                new_s = word;
            } else {
                new_s += " " + word;
            }

            right = left;
        }

        return new_s;
    }
};