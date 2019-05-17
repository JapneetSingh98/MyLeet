//
//  validParentheses.cpp
//  mySketch
//
//  Created by Japneet Singh on 5/17/19.
//

#include <stdio.h>
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                stack.push_back(x);
            } else if (x == ')') {
                if (stack.empty() || stack.back() != '(') {
                    return false;
                } else {
                    stack.pop_back();
                }
                
            } else if (x == '}') {
                if (stack.empty() || stack.back() != '{') {
                    return false;
                } else {
                    stack.pop_back();
                }
                
            } else if (x == ']') {
                if (stack.empty() || stack.back() != '[') {
                    return false;
                } else {
                    stack.pop_back();
                }
            }
        }
        if (stack.empty()) {
            return true;
        }
        return false;
    }
};
