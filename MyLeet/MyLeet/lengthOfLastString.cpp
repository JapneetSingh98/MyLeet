class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s == "") {
            return 0;
        } else {
            bool wordStart = false;
            int length = 0;
            for (int i = 0; i < s.length(); i++) {
                
                if (s.at(s.length()-1-i) != ' ') {
                    wordStart = true;
                    length++;
                }
                if (wordStart && s.at(s.length()-1-i) == ' ') {
                    return length;
                }
            }
            if (wordStart) {
                return length;
            }
            return 0;
        }
    }
};
