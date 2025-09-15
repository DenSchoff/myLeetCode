class Solution {
public:
    bool rotateString(string s, string goal) {
        int i = 0;
        while (i < goal.length())
        {
            s.push_back( s[0] );
            s.erase(0, 1);
            i++;
            if ( s == goal )
            {
                return true;
                break;
            }
        }
        return false;
    }
};
