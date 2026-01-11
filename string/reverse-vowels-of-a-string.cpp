class Solution {
public:
    string reverseVowels(string s) {
        string vowels = "";
        string new_s = "";
        
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
                s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                vowels += s[i];
            }
        }
        
        int count = 0; 
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || 
                s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') {
                
                new_s += vowels[vowels.length() - 1 - count];
                count++; 
            } else {
                new_s += s[j];
            }
        }
        return new_s;
    }
};