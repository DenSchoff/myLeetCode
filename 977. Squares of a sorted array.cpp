class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> myVector;
        int i = 0;
        int j = nums.size() - 1;
        while (i <= j)
        {
            if (nums[i] * nums[i] > nums[j] * nums[j])
            {
                myVector.push_back(nums[i] * nums[i]);
                i++;
            }
            else 
            {
                myVector.push_back(nums[j] * nums[j]);
                j--;
            }
        }
        reverse(myVector.begin(), myVector.end());
        return myVector;
    }
};
