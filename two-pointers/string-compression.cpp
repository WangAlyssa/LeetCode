class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int i = 0;

        while (i < n) {
            char currChar = chars[i];
            int count = 0;

            while (i < n && chars[i] == currChar) {
                i++;
                count++;
            }

            chars[write++] = currChar;

            if (count > 1) {
                string s = to_string(count);
                for (char c : s) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};