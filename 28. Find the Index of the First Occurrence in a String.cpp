class Solution {
public:
    int strStr(string haystack, string needle) {
        int answer = -1;
        int i = 0;
        int j = 0;
        while (i < haystack.length() && j < needle.length())
        {
            if ( haystack[i] == needle[0] )
            {
                answer = i;
                while ( j < needle.length() )
                {
                    if ( haystack[ i + j ] != needle[j]) 
                    {
                        j = 0;
                        answer = -1;
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
        return answer;
    }
};
