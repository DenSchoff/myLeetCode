class Solution {
public:
    int climbStairs(int n) {
        vector<int> myVector = {1, 1};
        for (int i = 2; i <= n; i++)
        {
            myVector.push_back(myVector[i-1] + myVector[i-2]);
        }
        return myVector[n];
    }
};
