class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 1;
        if (n == 1) return 1;
        vector<int> myVector = {1, 1};
        for (int i = 2; i <= n; i++)
        {
            myVector.push_back(myVector[i-1] + myVector[i-2]);
        }
        return myVector[n];
    }
};
