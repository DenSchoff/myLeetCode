// I made this solution three times different ways, because two times it was too slow (7 ms, 4 ms, 0 ms)
class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        return fib(n-1) + fib(n-2);
    }
};
/* *********************************** */
class Solution {
public:
    int fib(int n) {
        vector<int> myVector = {0, 1};
        for (int i = 2; i <= n; i++)
        {
            myVector.push_back( myVector[i-1] + myVector[i-2] );
        }
        return myVector[n];
    }
};
/* *********************************** */
class Solution {
public:
    int fib(int n) {
        if (n <= 0) return 0;
        int prev = 0;
        int curr = 1;
        int temp = 0;
        for (int i = 1; i < n; i++)
        {
            temp = curr;
            curr = curr + prev;
            prev = temp;
        }
        return curr;
    }
};
