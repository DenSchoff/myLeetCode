// I know this solution stinks, but it is not that bad since works only 6 ms on LeetCode and beats 75% in memory
class Solution {
public:
    int romanToInt(string s) {
        int answer = 0;

        vector<int> ints =      {1000, 500, 100,  50,  10,   5, 1};
        vector<char> strings = {'M', 'D', 'C', 'L', 'X', 'V', 'I'};
        vector<int> funnyInts =        {900,  400,   90,   40,   9,    4};
        vector<string> funnyStrings = {"CM", "CD", "XC", "XL", "IX", "IV"};

        int i = 0;
        while ( i < funnyInts.size() )
        {
            int start_position_to_erase = s.find(funnyStrings[i]);
            if (start_position_to_erase >= 0) 
            {
                s.erase(start_position_to_erase, 2);
                answer += funnyInts[i];
            }
            i++;
        }
        i = 0;
        while (!empty(s))
        {
            while (s.c_str()[0] == strings[i])
            {
                s.erase(0, 1);
                answer += ints[i];
            }
            i++;
        }
        return answer;
    }
};
