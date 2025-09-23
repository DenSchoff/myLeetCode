// The solution with vectors was my first approach, but since it takes too much memory I decidesd to remake it
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        while ( j > i )
        {
            if (nums[i] % 2 != 0)
            {
                while ( nums[j] % 2 != 0 && j > i)
                {
                    j--;
                }
                swap( nums[i], nums[j] );
            }
            i++;
        }
        return nums;
    }
};
/*****************************************************************/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> evens;
        vector<int> odds;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0) evens.push_back( nums[i] );
            else odds.push_back( nums[i] );
        }
        evens.insert(evens.end(), odds.begin(), odds.end());
        return evens;
    }
};
