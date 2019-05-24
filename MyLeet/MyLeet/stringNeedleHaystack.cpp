class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.length() > haystack.length()) {
            cout << needle.length() << " " << haystack.length() << endl;
            return -1;
        } else if (needle.length()==0) {
            return 0;
        }
        for (int i = 0; i <= haystack.length()-needle.length(); i++) {
            cout << haystack.substr(i, needle.length()) << endl;
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
