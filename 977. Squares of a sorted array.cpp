class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> myVector;
        int i = 0;
        int j = 0;
        int smallestI = 0;
        while (i < nums.size() - 1)
        {
            if (nums[i]*nums[i] < nums[i+1]*nums[i+1])
            {
                smallestI = i;
                break;
            }
            i++;
        }
        i = 1;
        j = 1;
        myVector.push_back(nums[smallestI] * nums[smallestI]);
        while ((i+j < nums.size() + 1))
        {
            if ( nums[smallestI + i] * nums[smallestI + i] < nums[smallestI - j] * nums[smallestI - j])
            {
                myVector.push_back( nums[smallestI + i] * nums[smallestI + i] );
                i++;
            }
            else
            {
                myVector.push_back( nums[smallestI - j] * nums[smallestI - j] );
                j++;
            }
        }
        return myVector;
    }
};
