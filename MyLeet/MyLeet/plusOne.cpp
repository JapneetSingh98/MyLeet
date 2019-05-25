class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool done = false;
        int loc = digits.size() - 1;
        while (!done) {
            if (loc == -1) {
                digits.insert(digits.begin(), 1);
                break;
            }
            if (digits[loc] < 9) {
                digits[loc]++;
                break;
            } else {
                digits[loc] = 0;
                loc--;
            }
        }
        return digits;
    }
};
