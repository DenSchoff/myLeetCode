// First solution is faster, obviously, but second one allows to see int in binary
//class Solution {
//public:
//    int reverseBits(int n) {
//        int answer = 0;
//        for (int i = 31; i >= 0; i--)
//        {
//            if (n - pow(2, i) >= 0)
//            {
//                n = n - pow(2, i);
//                answer += pow(2, 31-i);
//            }
//        }
//        return answer;
//    }
//};
class Solution {
public:
    int reverseBits(int n) {
        string binary;
        int answer = 0;
        for (int i = 31; i >= 0; i--)
        {
            if (n - pow(2, i) >= 0)
            {
                n = n - pow(2, i);
                binary += '1';
            }
            else binary += '0';
        }
        reverse(binary.begin(), binary.end());
        for (int i = 31; i >= 0; i--)
        {
            if ( binary[i] == '1')
            {
                answer += pow(2, 31-i);
            }
        }
        //cout << binary;
        return answer;
    }
};
