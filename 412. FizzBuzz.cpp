// This solution might be look bad, but it is fast and readable and saves memory (beats 100% on time and 93% on memory)
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n; i++)
        {
            if ( i % 3 == 0 && i % 5 == 0)
            {
                answer[i-1] = "FizzBuzz";
            }
            else if ( i % 3 == 0 && i % 5 != 0)
            {
                answer[i-1] = "Fizz";
            }
            else if ( i % 3 != 0 && i % 5 == 0)
            {
                answer[i-1] = "Buzz";
            }
            else
            {
                answer[i-1] = to_string(i);
            }
        }
        return answer;
    }
};
