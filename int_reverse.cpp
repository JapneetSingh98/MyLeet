//
//  int_reverse.cpp
//  mySketch
//
//  Created by Japneet Singh on 5/16/19.
//

#include "int_reverse.hpp"
using namespace std;
#include <string>
#include "iostream"

class Solution {
public:
    int reverse(int x) {
        cout << "input: " << x << endl;
        if (x > 2147483647 || x < -2147483648) {
            return 0;
        }
        string num = to_string(x);
        string ans = "";
        bool neg = false;
        for(int i = 0; i < num.length(); i++) {
            if (num.at(i) == '-') {
                neg = true;
                continue;
            }
            ans = num.at(i) + ans;
            
        }
        if (neg) {
            ans = '-' + ans;
            cout<<"after neg" << ans<<endl;
        }
        cout << "ans: " << ans << endl;
        long long fin = stoll(ans);
        if (fin > 2147483647 || fin < -2147483648) {
            return 0;
        }
        cout << "fin:  " << fin << endl;
        return fin;
    }
};
