// Same as 26, but works in 0 ms and beats 100%
// LeetCode, why?
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == val) {nums.erase(nums.begin() + i); i--;}
            i++;
        }
        return nums.size();
    }
};
