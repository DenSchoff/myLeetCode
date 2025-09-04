// This works so slow because it is actually removing duplicates
// Yet Im a silly shitcoder
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int compare = 999;
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] != compare) compare = nums[i];
            else {nums.erase(nums.begin() + i); i--;}
            i++;
        }
        
        return nums.size();
    }
};
