//
//  twoSum.cpp
//  mySketch
//
//  Created by Japneet Singh on 5/17/19.
//

#include <stdio.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> soln;
        for (int i = 0; i < nums.size()-1; i++) {
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    soln.push_back(i);
                    soln.push_back(j);
                    return soln;
                }
            }
        }
        return soln;
    }
};
