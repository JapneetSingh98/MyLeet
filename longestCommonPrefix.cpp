//
//  longestCommonPrefix.cpp
//  mySketch
//
//  Created by Japneet Singh on 5/16/19.
//

#include <stdio.h>

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string longest = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            int len = 0;
            while (len < longest.length()
                   && len < strs[i].length()
                   && longest.at(len) == strs[i].at(len)) {
                len++;
            }
            
            longest = longest.substr(0, len);
            
        }
        return longest;
    }
};
