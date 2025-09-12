// This is my first solution and it stinks 
// I will make it better someday
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int lookingFor;
        vector<int> myVector(2);

        for (int i = 0; i < nums.size(); i++)
        {
            lookingFor = target - nums[i];
            for (int j = 0; j < i; j++)
            {
                if (nums[j] == lookingFor)
                {
                    myVector[0] = i;
                    myVector[1] = j;
                }
            }
        }
        return myVector;
    }
};
