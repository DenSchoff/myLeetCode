class Solution {
public:
    int hammingWeight(int n) {
        int answer = 0;
        int i = 32;
        while (i >= 0 && n > 0)
        {
            if (n >= pow(2, i) )
            {
                n = n - pow(2, i);
                answer++;
            }
            i--;
        }
        return answer;
    }
};
