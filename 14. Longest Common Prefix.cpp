class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        uint8_t max = 255;
        for (int i = 0; i < strs.size(); i++)
        {
            if (strs[i].length() < max) max = strs[i].length();
        }
        bool add = true;
        int j = 0;
        if (!strs.empty()) {
        while (j<max && strs[0] != "")
        {
            char compare = strs[0].c_str()[j];
            for (int i = 0; i < strs.size(); i++)
            {
                if (strs[i].c_str()[j] != compare) add = false; 
            }
            if (add == true) prefix += compare;
            j++;
        }
        }
        return prefix;
    }
};
