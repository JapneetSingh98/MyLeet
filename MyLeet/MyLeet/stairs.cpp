class Solution {
public:
    
    int arr[100] = {-1};
    
    int climbStairs(int n) {
        //arr.resize(n,-1);
        for (int i = 0; i < 100; i++) {
            arr[i] = -1;
        }
        arr[0] = helper(n, 0);
        return arr[0];
    }
    
    int helper(int total, int curr) {
        if (arr[curr] != -1) {
            return arr[curr];
        }
        if (curr == total) {
            arr[curr] = 1;
            return arr[curr];
        } else if (curr + 1 == total) {
            arr[curr+1] = helper(total, curr+1);
            return arr[curr+1];
        } else {
            arr[curr+1] = helper(total, curr+1);
            arr[curr+2] = helper(total, curr+2);
            return arr[curr+1] + arr[curr+2];
        }
    }
};
